#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE* read = fopen("images.jpg", "rb");
	FILE* write = fopen("copy.jpg", "wb");
	if (read == NULL)
	{
		printf("File khong ton tai.");
		exit(0);
	}
	while (!feof(read))
		fputc(fgetc(read), write);
	fclose(read);
	fclose(write);
}