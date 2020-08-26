#include <stdio.h>
#include "tim.h"

void main()
{
    int so[4];
    printf("Input 3 numbers: ");
    for (size_t i = 0; i < 3; i++)
    {
        scanf("%d", so + i);
    }
    printf("Largest number is %d\n\r\n\r", tim(so));
}