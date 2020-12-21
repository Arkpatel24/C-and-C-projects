#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sum(int,int);

int main(int argc, char *argv[]) 
{
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	
	sum(a,b);
	
	return 0;
}

int sum(int a,int b)
{
	printf("Sum is :%d",a+b);
}
