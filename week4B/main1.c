#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int i, a2[5];
	int a1[5] = {0,1,2,3,4};
	for(i= 0; i<5 ; i++)
	{
		a2[i] = a1[i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",a2[i]);
	}
	return 0;
}
