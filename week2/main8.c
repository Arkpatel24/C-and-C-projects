#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n=4,m=8,sum=0;
	while(n<=m)
	{
		sum=sum+n;		
		n++;
	}
	printf("Sum is %d",sum);
	return 0;
}
