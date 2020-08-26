#include <stdio.h>
#include "chan_le.h"

void main()
{
    int n;
    printf("So lan nhap: ");
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        int so;
        printf("\n\rNhap so: ");
        scanf("%d", &so);
        chan_le(so);
    }
}