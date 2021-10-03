#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	x=0;
	
	printf("enter choise (1 - 3) :");
	scanf("%d", &x);
	if (x == 1)
	    printf("choise is 1\n");
	else if (x == 2)
	    printf("choise is 2\n");
	else if (x == 3)
	    printf("choise is 3\n");
	else 
	printf("invalid choise\n");

	return 0;
}
