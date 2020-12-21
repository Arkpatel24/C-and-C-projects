#include <stdio.h>
#include <stdlib.h>

//this program will extract the first N characters of a string. 
int main(int argc, char *argv[]) 
{
	char str[100],substr[100];
	int num,i=0;
	printf("Enter the string:");  //take input from user as string
	gets(str);
	
	printf("Enter the number of characters to be copied from left:"); // take input from user as int
	scanf("%d",&num);
	
	//while loop to coping one string element to another string till num
	while(i<num)
	{
		substr[i]=str[i];
		i++;
	}
	printf("The substring is:");//printing substring
	puts(substr);
	return 0;
}
