#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char ch;
	printf("Enter any character:");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 'a':
		case 'A':
			printf("it is vowel");
			break;
			
		
		case 'e':
		case 'E':	
			printf("it is vowel");
			break;
			
		case 'u':
		case 'U':
			printf("it is vowel");
			break;
			
		case 'i':
			case 'I':
			printf("it is vowel");
			break;
			
		case 'o':
			case 'O':
			printf("it is vowel");
			break;
			
			default:
				printf("it is alphabet");
				
	}
	
	return 0;
}
