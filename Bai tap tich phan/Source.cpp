#include <stdio.h>
#include "Header2.h"

void main()
{
	float a = 0, b = 0;
	printf("Nhap 2 diem gioi han: ");
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	int n = 0;
	printf("\n\rDo chinh xac (so lan chia): ");
	scanf_s("%d", &n);
	printf("\n\r\n\rKet qua tinh tich phan: %f", functionptr3(&a, &b, &n));
}