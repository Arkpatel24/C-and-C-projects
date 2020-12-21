#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,n;
	printf("Enter number to print  from 1: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d",i);
	}
	return 0;
}
