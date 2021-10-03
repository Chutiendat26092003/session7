#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,kq;
	printf("Nhap so a:\n");
	scanf("%f", &a);
	printf("Nhap so b:\n");
	scanf("%f", &b);
	
	printf("a/b= %f\n", kq=a/b);
	
	if (kq == 0)
	   printf("a chia het cho b");
	else 
	    printf("a k chia het cho b");
	    
		return 0;
}
