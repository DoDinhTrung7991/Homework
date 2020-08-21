#include <stdio.h>
#include <string.h>
#include "Header.h"

int on_off(int test)
{
	char text[4];
	for (size_t n = test + 2; n < strlen(str); n++)
	{
		if (str[n] == '\"')
		{
			for (size_t j = 0; j < 3; j++)
			{
				if (str[n + j + 1] == '\"')
					break;
				else
					text[j] = str[n + j + 1];
			}
			break;
		}
	}
	if (text[0] == 79 && text[1] == 70 && text[2] == 70)
		return 0;
	else
		return 1;
}