

#include <stdio.h>
#include <stdlib.h>

/* run this program ung the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float marks;
	printf("Enter grade of a student: ");
	scanf("%f", &marks);
	
	if (75<=marks)
	     printf("Grade A");
    else if (60<=marks&&marks<=75)
           printf("Grade B");
        else if (45<=marks&&marks<=60)
             printf("Grade C");
            else if (35<=marks&&marks<=45)
                   printf("Grade D");
                else  
                     printf("Grade E");
                     
	
	return 0;
}
