#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,res;
	printf("enter the number a :\n");
	scanf("%d", &a);
	printf("enter the number b :\n");
	scanf("%d", &b);
    
    printf("a - b = %d\n", res=a-b);
    
    if (res == a || res ==b)
        printf("Difference is equal to value <number of value entered");
    else
        printf("Difference is not equal to any og the values entered");
        
     
	
	
	
	
	return 0;
}
