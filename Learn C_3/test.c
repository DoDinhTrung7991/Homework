#include <stdio.h>

void test(int so)
{
    int check = 0;
    for (size_t i = 1; i <= so; i++)
        if (i * i == so)
        {
            check = 1;
            break;
        }
    if (check == 1)
        printf("So da cho la so chinh phuong.\r\n");
    else
        printf("So da khong phai la so chinh phuong.\r\n");
}