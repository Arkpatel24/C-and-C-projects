#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void fun(int x);   
int main(int argc, char *argv[]) 
{
	int x;
	printf("The value of num before calling function:");
	scanf("%d",&x);
	
	fun(x);   
	printf("The value of num after calling function: %d", x);
	return 0;
}
void fun(int x)
{
	int y=x+10;
	printf("The value of num in function :%d\n",y);
}
