#include <stdio.h>

int Tong(int *so, int *n)
{
    int tong = 0;
    for (size_t i = 0; i < *n; i++)
        if (*(so + i) % 2 == 1)
            tong += *(so + i) * *(so + i);
    return tong;
}