#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	struct number
	{
	int num1,num2,num3;
	};  
	struct number large;
	
	printf("Enter the first number");
	scanf("%d",&large.num1);
	printf("Enter the second number");
	scanf("%d",&large.num2);
	printf("Enter the third number");
	scanf("%d",&large.num3);
	
	if(large.num1>large.num2 && large.num1>large.num3)
	{
		printf("greater number is %d ",large.num1);
	}
	else if(large.num2>large.num1 && large.num2>large.num3)
	{
		printf("greater number is %d ",large.num2);
	}
	else
	{
		printf("greater number is %d ",large.num3);
	}
	
	return 0;
}
