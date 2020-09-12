#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ghi_file(char* ch)
{
	FILE* write = fopen("text.txt", "w");
	fprintf(write, "%s", ch);
	fclose(write);
}

char* doc_file(char* ch)
{
	FILE* read = fopen("text.txt", "r");
	char* str = (char*)malloc(sizeof(char) * strlen(ch));
	fscanf(read, " %[^\n]s", str);
	fclose(read);
	return str;
}