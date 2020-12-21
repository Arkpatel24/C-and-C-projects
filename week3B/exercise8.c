#include <stdio.h>

int main(int argc, char** argv)

{
    int a,b,c, *p, *q, *r;
    
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Enter Third Number: ");
	    scanf("%d",&c);    
    p = &a;
    q = &b;
    r = &c;
    if(*p > *q)
    {
	if(*p > *r)
	{
		printf("%d is the largest number", *p);
	}
	else
	{
		printf("%d is the largest number", *r);
	}
    }
    else
    {
	if(*q > *r)
	{
		printf("%d is the largest number", *q);
	}
	else
	{
		printf("%d is the largest number", *r);
	}
    }
    return 0;
}
