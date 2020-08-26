#include <stdio.h>
#include <stdlib.h>
#include "tong.h"

void main()
{
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    int* nhap_so = (int*)malloc(sizeof(int) * n);
    printf("\n\rInput %d numbers: ", n);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d", &nhap_so[i]);
    }
    printf("\n\rThe result is %d\n\r\n\r", Tong(nhap_so, &n));
    free(nhap_so);
}