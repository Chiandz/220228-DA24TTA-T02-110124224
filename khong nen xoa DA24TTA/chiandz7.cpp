#include <stdio.h>
int main() 
{
    //In bang cuu chuong tu 2 den 9
    for (int n = 2; n <= 9; n++) {
        printf("bang cuu chuong thu %d:\n", n);
        for (int i = 1; i <= 10; i++) 
		{
            printf("%d x %d = %d\n", n, i, n * i);
        }
        printf("\n"); 
	// tao mot dong trong giua cac bang
    }

    return 0;
}

