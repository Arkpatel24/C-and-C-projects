#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int x,y;
	printf("Enter your first number:");
	scanf("%d",&x);
	
	printf("Enter your second number:");
	scanf("%d",&y);
	
	printf("Addition of %d+%d is %d",x,y,x+y);
	return 0;
}
