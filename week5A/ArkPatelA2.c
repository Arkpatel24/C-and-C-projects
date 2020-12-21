#include <stdio.h>
#include <stdlib.h>

//program to sum two number in inch-feet using structure
int main(int argc, char *argv[])
{
	//declaration of structure distance
	struct distance
	{
		int feet;
		float inch;
	}dist1,dist2,result;//declaration of structure variable

	//user input
	printf("Enter the 1st distance:\n");
	printf("Enter feet:");
	scanf("%d",&dist1.feet);	
	printf("Enter inch:");
	scanf("%f",&dist1.inch);
	
	printf("\nEnter the 2st distance:\n");
	printf("Enter feet:");
	scanf("%d",&dist2.feet);	
	printf("Enter inch:");
	scanf("%f",&dist2.inch);
	
	//addition of feet and inche
	result.feet = dist1.feet + dist2.feet;
   	result.inch = dist1.inch + dist2.inch;

   	// while loop to change inch to feet if inche  is greater than 12
   	while (result.inch > 12.0) 
	   {
    	  result.inch = result.inch - 12.0;
      		++result.feet;
   		}
   	//printing result
   	printf("\nSum of distances = %d\'-%.1f\"", result.feet, result.inch);
   
	return 0;
}
