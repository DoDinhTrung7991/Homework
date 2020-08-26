#include "Header.h"

void Rutgon(Phanso *A)
{
	if ((A->tu) >= (A->mau))
	{
		for (size_t i = (A->mau); i >= 1; i--)
			if ((A->tu) % i == 0 && (A->mau) % i == 0)
			{
				(A->tu) /= i;
				(A->mau) /= i;
				break;
			}
	}
	else
		for (size_t i = (A->tu); i >= 1; i--)
			if ((A->tu) % i == 0 && (A->mau) % i == 0)
			{
				(A->tu) /= i;
				(A->mau) /= i;
				break;
			}
}

Phanso Cong(Phanso A, Phanso B)
{
	Phanso C;
	C.tu = A.tu * B.mau + A.mau * B.tu;
	C.mau = A.mau * B.mau;
	Rutgon(&C);
	return C;
}

Phanso Tru(Phanso A, Phanso B)
{
	B.tu = -B.tu;
	return Cong(A, B);
}

Phanso Nhan(Phanso A, Phanso B)
{
	Phanso N;
	N.tu = A.tu * B.tu;
	N.mau = A.mau * B.mau;
	Rutgon(&N);
	return N;
}

Phanso Chia(Phanso A, Phanso B)
{
	int temp = B.tu;
	B.tu = B.mau;
	B.mau = temp;
	return Nhan(A, B);
}