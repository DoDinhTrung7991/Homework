#include <stdio.h>
#include <string.h>
#include "Header.h"

void main()
{
	printf(str);
	char input[11];
	for (size_t i = 0; i < 4; i++) //check 4 times
	{
		printf("\n\rInput: ");
		gets_s(input);
		if (strlen(input) >= 9 && strlen(input) <= 10)
		{
			unsigned int m = 0;
			unsigned int check = 0;
			for (m = 0; m <= strlen(str) - 9; m++)
			{
				for (check = 0; check < strlen(input); check++)
					if (str[m + check] != input[check])
						break;
				if (check == strlen(input))
					break;
			}
			if (check == strlen(input))
			{
				printf("Output: %d\n\r", on_off(m + strlen(input) - 1));
			}
			else
			{
				printf("Wrong input!!!\n\r");
			}
		}
		else
			printf("Wrong input!!!\n\r");
	}
}