#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int pos=-1,i=1;
	int arr[10],n,val;
	
	printf("Enter the number of element in array:");
	scanf("%d",&n);
	
	printf("Enter the number:");
	for(int i = 1; i <= n; ++i)
	 {
     scanf("%d", &arr[i]);
 	 }
	
	
	printf("Enter the number to be search:");
	scanf("%d",&val);

	while(i<n)
	{
		if(arr[i]==val)
		{
			pos=i;
			printf("%d is found at position %d",val,arr[pos]);
			break;
		}
		i=i+1;
	}
		
	if(pos==-1)
	{
		printf("Value not found");
	}
	
	return 0;
}
