//#define _CRT_SECURE_NO_WARNINGS
#define MAX_BUFFER_SIZE 256

#include <stdio.h>
#include <WinSock2.h>
#include "Socket.h"

SOCKET socket_init;
size_t stop_1 = FALSE, stop_2 = FALSE;
char buf[MAX_BUFFER_SIZE] = { 0 };
char buff[MAX_BUFFER_SIZE] = { 0 };


WINAPI Send_data(LPVOID lpThreadParameter);
WINAPI Receive_data(LPVOID lpThreadParameter);

/*-------------------------------------------------------------*/

void main()
{	 
	Socket_Server_Init(23);
	listen(s, 10);
	socket_init = accept(s, NULL, 0);
	send(socket_init, "Started communicating:", 22, 0);
	printf("\r\nStarted communicating:");
	HANDLE thread1 = CreateThread(NULL, (MAX_BUFFER_SIZE + 75), Send_data, NULL, 0, NULL);
	HANDLE thread2 = CreateThread(NULL, (MAX_BUFFER_SIZE + 75), Receive_data, NULL, 0, NULL);
	while ((stop_1 == FALSE) && (stop_2 == FALSE)){}
	send(socket_init, "\r\n\r\nEnd communicating:", 21, 0);
	printf("\r\n\r\nEnd communicating:");
}

/*-------------------------------------------------------------*/

WINAPI Send_data(LPVOID lpThreadParameter)
{
	while (1)
	{
		memset(buff, '\0', sizeof(buff));
		printf("\r\n\r\nSend: ");
		fgets(buff, MAX_BUFFER_SIZE, stdin);
		send(socket_init, "\r\n\r\n", 4, 0);
		send(socket_init, buff, MAX_BUFFER_SIZE, 0);
	}
	if (buff[0] == 'B' && buff[1] == 'y' && buff[2] == 'e' && buff[3] == '\0')
		stop_2 = TRUE;
	else
		stop_2 = FALSE;
}

WINAPI Receive_data(LPVOID lpThreadParameter)
{
	while (1)
	{
		memset(buf, '\0', sizeof(buf));
		send(socket_init, "\r\n\r\n", 4, 0);
		recv(socket_init, buf, MAX_BUFFER_SIZE, 0);
		printf("\r\n\r\nReceive: %s\r\n", buf);
		if (buf[0] == 'B' && buf[1] == 'y' && buf[2] == 'e' && buf[3] == '\0')
			stop_1 = TRUE;
		else
			stop_1 = FALSE;
	}
}