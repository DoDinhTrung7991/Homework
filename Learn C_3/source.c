#include <stdio.h>
#include "test.h"

void main()
{
    int n;
    printf("So lan tim: ");
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        printf("\n\r\n\rNhap so: ");
        int so;
        scanf("%d", &so);
        test(so);
    }
}