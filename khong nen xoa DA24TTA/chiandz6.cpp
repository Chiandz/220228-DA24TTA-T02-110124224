#include <stdio.h>
int main() 
{
    int n, sum = 0;

    // Nhap so nguyen n tu nguoi dung
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    // Lap qua cac chu so cua so nguyen n va tinh tong
    while (n != 0) 
	{
        sum += n % 10; 
        n /= 10;        
    }

    // In ra tung cac chu so
    printf("Tong cac chu so cua so da nhap la: %d\n", sum);

    return 0;
}

