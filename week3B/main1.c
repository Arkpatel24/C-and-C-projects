#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
	char ch,*chr;
	printf("Enter any character:");
	scanf("%c",&ch);
	chr = &ch;
	switch(*chr)
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
