#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) 
{
	int a[5],i;
	printf("Enter the numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	{
	printf(" %d ",a[i]);
	}
	return 0;
}
