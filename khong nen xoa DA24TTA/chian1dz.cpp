#include<stdio.h>
int main()
{
	char hoten[50];
	char lop[20];
	//Nhap ho ten 
	printf("nhap ho ten cua ban:");
	fflush(stdin);
	gets(hoten);
	//Nhap lop
	printf("nhap lop cua ban:");
	fflush(stdin);
	gets(lop);
	//Xuat thong tin
	printf("\n thong tin cua ban :\n");
	printf(" ho ten : %s", hoten);
	printf(" lop : %s", lop);
	
	return 0;
}	
