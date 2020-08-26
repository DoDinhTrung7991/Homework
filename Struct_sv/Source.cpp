#pragma pack(push)
#pragma pack(1)

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	unsigned int day;
	char month[10];
	unsigned int year;
}birthday;

typedef struct
{
	char ten[30];
	unsigned int mssv;
	char major[20];
	char hometown[15];
	birthday sv;
}sinh_vien;

void main()
{
	unsigned int n = 0;
	printf("So sinh vien: ");
	scanf_s("%d", &n);
	sinh_vien* sv = (sinh_vien*)malloc(sizeof(sinh_vien) * n);
	for (size_t i = 0; i < n; i++)
	{
		printf("\n\r\n\rSinh vien thu %d:", i + 1);
		printf("\n\rTen sinh vien: ");
		fgets((sv + i)->ten, sizeof((sv + i)->ten), stdin);
		printf("Ma so sinh vien: ");
		scanf_s("%d", &((sv + i)->mssv));
		printf("Nganh: ");
		fgets((sv + i)->major, sizeof((sv + i)->major), stdin);
		printf("Thanh pho: ");
		fgets((sv + i)->hometown, sizeof((sv + i)->hometown), stdin);
		printf("Ngay sinh: ");
		scanf_s("%d", &((sv + i)->sv.day));
		printf("Thang sinh: ");
		fgets((sv + i)->sv.month, sizeof((sv + i)->sv.month), stdin);
		printf("Nam sinh: ");
		scanf_s("%d", &((sv + i)->sv.year));
		printf("\n\rTen: %s", (sv + i)->ten);
		printf("\n\rMssv: %d", (sv + i)->mssv);
		printf("\n\rNganh: %s", (sv + i)->major);
		printf("\n\rThanh pho: %s", (sv + i)->hometown);
		printf("\n\rNgay sinh: %d / %s / %d", (sv + i)->sv.day, (sv + i)->sv.month, (sv + i)->sv.year);
	}
}