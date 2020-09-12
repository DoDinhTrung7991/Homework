#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PI 3.14159
#define DO_DAI_CUNG_TRON(r, goc) ((PI * r *goc)/PI)

#ifndef FALSE			
#define FALSE 0		
#elif FALSE				
#undef FALSE		
#define FALSE 0		
#endif

#ifndef TRUE			
#define TRUE 1		
#elif TRUE				
#undef TRUE			
#define TRUE 1		
#endif

#if DO_DAI_CUNG_TRON == 200		
#ifndef STATUS				
#define STATUS TRUE		
#elif STATUS				
#undef STATUS			
#define STATUS TRUE		
#endif
#else							
#ifndef STATUS				
#define STATUS FALSE	
#elif FALSE					
#undef STATUS			
#define STATUS FALSE	
#endif						
#endif

#if DO_DAI_CUNG_TRON < 50											
#ifndef CHECK													
#define CHECK "DO DAI CUNG TRON QUA NHO."					
#elif CHECK												
#undef CHECK						
#define CHECK "DO DAI CUNG TRON QUA NHO."					
#endif															
#elif DO_DAI_CUNG_TRON > 400									
#ifndef CHECK													
#define CHECK "DO DAI CUNG TRON QUA LON."					
#elif CHECK														
#undef CHECK												
#define CHECK "DO DAI CUNG TRON QUA LON."					
#endif															
#else																
#ifndef CHECK													
#define CHECK "DO DAI CUNG TRON NAM TRONG KHOANG CHO PHEP."	
#elif CHECK														
#undef CHECK												
#define CHECK "DO DAI CUNG TRON NAM TRONG KHOANG CHO PHEP."	
#endif															
#endif

void main()
{
	int r;
	double goc;
	printf("R = ");
	scanf("%d", &r);
	printf("Goc (* PI) = ");
	scanf("%lf", &goc);
	goc *= PI;
	printf("\r\n========================================================================\r\n\r\n");
	printf("Kiem tra xem bo bien dich co thuoc chuan ANSI hay khong (1 la co, 0 la khong): %d\r\n\r\nDay la lenh printf dong thu %d\r\nThuoc file %s\r\n\r\nBay gio la %s\tNgay: %s\r\n\r\n", __STDC_HOSTED__, __LINE__, __FILE__, __TIME__, __DATE__);
	printf("Do dai cung tron la %.3lf\r\nKiem tra tieu chuan cung tron (1 la co, 0 la khong): %d\r\n", DO_DAI_CUNG_TRON(r, goc), STATUS);
	printf("%s\r\n", CHECK);
}

//SAI VI TRINH BIEN DICH PHAI HOAN THANH TIEN XU LY TRUOC ROI MOI DEN CODE CHINH, NEN CODE CHINH KHONG TAC DONG VAO TIEN XU LY.