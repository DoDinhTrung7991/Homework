#include <stdio.h>

void chan_le(int so)
{
    if (so % 2 == 0)
        printf("\n\rSo chan.\n\r");
    else
        printf("\n\rSo le.\n\r");
}