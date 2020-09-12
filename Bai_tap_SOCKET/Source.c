#define _CRT_SECURE_NO_WARNINGS

#include "Socket.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	char serverIP[] = "116.193.72.106";
	Socket_Client_Init(serverIP, 80);
	Send("GET /2.jpg HTTP/1.1\r\nHost: mainhan.tk\r\n\r\n");
	char* buf = (char*)malloc(sizeof(char) * 256);
	size_t i = 0;
	while (1)
	{
		if (i < 3)
		{
			Recv(buf + i, 1);
			i++;
		}
		else if ((buf[i - 1] == '\n') && (buf[i - 2] == '\r') && (buf[i - 3] == '\n') && (buf[i - 4] == '\r'))
			break;
		else
		{
			Recv(buf + i, 1);
			i++;
		}
	}
	size_t t = 0;
	for (t = i; t < strlen(buf); t++)
		buf[t] = '\0';
	printf(buf);
	char* size_1 = strstr(buf, "Content-Length: ") + strlen("Content-Length: ");
	for (i = 0; i < strlen(size_1); i++)
		if (size_1[i] == '\r')
			break;
	unsigned int sum = 0;
	for (size_t t = 0; t < i; t++)
	{
		sum += ((unsigned int)(size_1[i - t - 1] -= 48) * (unsigned int)(pow(10, t)));
	}
	free(buf);
	FILE* fptr = fopen("copy.jpg", "wb");
	char buff[1];
	for (i = 0; i < sum; i++)
	{
		Recv(buff, 1);
		fputc(buff[0], fptr);
	}
	fclose(fptr);
}