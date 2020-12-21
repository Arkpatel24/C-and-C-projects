#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int greater(int,int,int);

int main(int argc, char *argv[]) 
{
	int a,b,c;
	printf("Enter first no:");
	scanf("%d",&a);
	printf("Enter second no:");
	scanf("%d",&b);
	printf("Enter third no:");
	scanf("%d",&c);
	
	greater(a,b,c);
	
	return 0;
}

int greater (int a, int b,int c)
{
	if(a>b && a>c)
	{
		printf("%d is greater",a);
	}
	
	else if(b>a && b>c)
	{
		printf("%d is greater",b);
	}
	else
	{
		printf("%d is greater",c);
	}
}
