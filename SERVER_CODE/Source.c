#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <WinSock2.h>
#include "Socket.h"

void Send_data(char* buff, SOCKET socket_init, size_t* stop_2);
void Receive_data(char* buf, SOCKET socket_init, size_t* stop_1);
enum halt {T = 1, F = 0};

/*-------------------------------------------------------------*/

void main()
{	 
	Socket_Server_Init(23);
	listen(s, 10);
	SOCKET socket_init = accept(s, NULL, 0);
	char buf[256] = { 0 };
	char buff[256] = { 0 };
	send(socket_init, "Started communicating:", 22, 0);
	printf("\r\n\r\nStarted communicating:");
	while (1)
	{
		size_t stop_1 = F, stop_2 = F;
		Send_data(buff, socket_init, &stop_2);
		Receive_data(buf, socket_init, &stop_1);
		if (stop_1 == T && stop_2 == T)
			break;
	}
}

/*-------------------------------------------------------------*/

void Send_data(char* buff, SOCKET socket_init, size_t* stop_2)
{
	printf("\r\n\r\nSend: ");
	scanf(" %[^\n]s", buff);
	send(socket_init, "\r\n\r\n", 4, 0);
	send(socket_init, buff, strlen(buff), 0);
	if (buff[0] == 'B' && buff[1] == 'y' && buff[2] == 'e' && buff[3] == '\0')
		*stop_2 = T;
	memset(buff, '\0', strlen(buff));
}

void Receive_data(char* buf, SOCKET socket_init, size_t* stop_1)
{
	send(socket_init, "\r\n\r\n", 4, 0);
	recv(socket_init, buf, 256, 0);
	printf("\r\n\r\nReceive: %s", buf);
	if (buf[0] == 'B' && buf[1] == 'y' && buf[2] == 'e' && buf[3] == '\0')
		*stop_1 = T;
	memset(buf, '\0', strlen(buf));
}

