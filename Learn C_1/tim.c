#include <stdio.h>

int tim(int *so)
{
    int max = 0;
    for (size_t i = 0; i < 3; i++)
        if (*(so + i) > max)
            max = *(so + i);
    return max;
}