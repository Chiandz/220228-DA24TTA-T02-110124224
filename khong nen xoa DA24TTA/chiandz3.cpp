#include<stdio.h>
#define PI 3.14159
int main(){
	//Khai bao cac bien
	float a = 50;
	float b = 23;
	float c = 30;
	float chuVi = 12.56;
	
	//Khai bao cac bien cho hinh tron
	float chuViHinhTron = 12.56;
	float r, dienTichHinhTron;
	
	//Dien tich hinh thang
	float dienTichHinhThang =((a+b)*c)/2;
	
	//Tinh ban kinh hinh tron
	r = chuViHinhTron/ (2*PI);
	
	//Tinh dien tich hinh tron 
	dienTichHinhTron = PI * r * r;
	
	//Tinh dien tich con lai
	float dienTichConLai = dienTichHinhTron;
	
	//Xuat thong tin
	printf(" dien tich hinh thang:%.2f m^2\n",dienTichHinhThang);
	printf(" dien tich hinh tron:%.2f m^2\n",dienTichHinhTron);
	printf(" dien tich con lai :%.2f m^2\n",dienTichConLai);
	
	return 0;
}
