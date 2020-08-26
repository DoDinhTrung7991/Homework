#include <stdio.h>

void main()
{
    int mang[2][4];
    printf("Nhap:\n\r");
    for (size_t i = 0; i < 2; i++)
        for (size_t j = 0; j < 4; j++)
        {
            printf("Nhap mang [%d][%d]: ", i, j);
            scanf("%d", &mang[i][j]);
        }
    printf("\n\rXuat:\n\r");
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 4; j++)
            printf("\t%d", mang[i][j]);
        printf("\n\r");
    }
}