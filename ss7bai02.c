#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,kq;
	printf("nhap so a:\n");
	scanf("%f", &a);
	printf("nhap so b:\n");
	scanf("%f", &b);
	
	printf("tich 2 so a va b = %.3f\n", kq=a*b);
	if (kq ==1000)
	    printf("gia tri bang 1000");
	else if (kq >= 1000)
	        printf("gia tri lon hon 1000");
	    else printf("khong xac dinh");
	    
	
	return 0;
}
