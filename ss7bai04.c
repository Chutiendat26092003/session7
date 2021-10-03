#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float hardsalary = 10000;
	float a = 300;
	float b = 250;
	float others = 100;
	float sothang;
	 
	 
	printf("*****MONTEK COMPANY *******\n");
	printf("Luong cung moi nguoi nhan duoc : %f k \n", hardsalary);

	printf("so thang lam viec o cty :\n");
	scanf("%f", &sothang);
	
	if (sothang >=12)
	   printf("nhan phu cap %f k va tong tien luong cua thang la:%f k\n", a,a+hardsalary);
	else if ( 6 <= sothang&&sothang <= 12)
	        printf("nhan phu cap %f k va tong tien luong cua thang la:%f k\n ", b,b+hardsalary);
	    else
	       printf("nhan phu cap %f k va tong tien luong cua thang la:%f k\n", others,others+hardsalary);
	       
	
	
	
	return 0;
}
