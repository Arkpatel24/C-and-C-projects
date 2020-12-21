#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int n1=5,n2=10,min;
	min=n1<n2?n1:n2;
	printf("Smallest number is %d",min);
	return 0;
}
