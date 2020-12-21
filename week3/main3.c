#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float cal_area(float);
int main(int argc, char *argv[]) 
{
	float r;
	
	printf("Enter radius:");
	scanf("%f",&r);
	cal_area(r);
	return 0;
}

float cal_area(float r)
{
	float pi=3.14;
	float t=pi*r*r;
	printf("Area of circle is:%f",t);
}
