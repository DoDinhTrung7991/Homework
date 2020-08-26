#include <stdio.h>
#include "Header.h"
#include "Header1.h"

float Tinh_tich_phan(float* a, float* b, int* n)
{
	float h = (*b - *a) / *n;
	int q = 0;
	float i = *a, j = 0, tong = 0;
	for (q = 1; q <= *n; q++)
	{
		j = i + h;
		float be = functionptr1(&i), lon = functionptr1(&j);
		tong += functionptr2(&be, &lon, &h);
		i = j;
	}
	return tong;
}