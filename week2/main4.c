#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a=9,b=4,c;
	printf("%d",++a);
	printf("%d",a++);
	c=a+b;
	printf("Addition of %d + %d is %d\n",a,b,c);
	c=a-b;
	printf("Subtraction of %d - %d is %d\n",a,b,c);
	c=a*b;
	printf("Multiplication of %d * %d is %d\n",a,b,c);
	c=a/b;
	printf("Division of %d / %d is %d\n",a,b,c);
	c=a%b;
	printf("Remainder of %d %% %d is %d",a,b,c);
	printf("%d",++a);
	printf("%d",a++);
	return 0;
	
}
