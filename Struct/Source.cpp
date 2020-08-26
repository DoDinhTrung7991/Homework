#include <stdio.h>
#include "Header.h"

void main()
{
	Phanso A, B;
	printf("\n\rTu A la: ");
	scanf_s("%d", &A.tu);
	printf("\n\rMau A la: ");
	scanf_s("%d", &A.mau);
	printf("\n\r\n\rTu B la: ");
	scanf_s("%d", &B.tu);
	printf("\n\rMau B la: ");
	scanf_s("%d", &B.mau);
	printf("\n\r\n\rKet qua phep cong la %d/%d", Cong(A, B));
	printf("\n\r\n\rKet qua phep tru la %d/%d", Tru(A, B));
	printf("\n\r\n\rKet qua phep nhan la %d/%d", Nhan(A, B));
	printf("\n\r\n\rKet qua phep chia la %d/%d", Chia(A, B));
}