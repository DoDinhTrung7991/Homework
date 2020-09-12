#define _CRT_SECURE_NO_WARNINGS

#include "Header.h"
#include <string.h>
#include <stdio.h>

void main()
{
	char ch[14];
	printf("Input: ");
	scanf(" %[^\n]s", ch);
	ghi_file(ch);
	printf("\r\n\r\nOuput: %s", doc_file(ch));
}