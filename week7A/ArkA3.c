#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* this program will implement stack to resverse your name using array */
#define max 100  
int top,stack[max]; 
void push(char x);  
void pop();

int main(int argc, char *argv[]) 
{
	printf("My name is \"Ark Patel\"\n");
	char str[]="Ark Patel";  
   	int l = strlen(str);  
   	int i;  
  
   	for(i=0;i<l;i++) 
	{		 
        push(str[i]); 
 	}
	 	
 	printf("My reverse name is \"");
	 
	for(i=0;i<l;i++)
	{
		pop();
	}  
	printf("\"");		    
	return 0;
}


void push(char x)
{  
   if(top == max-1)
    {  
        printf("stack overflow");  
	} 
	else
	{  
	    stack[++top]=x;  
    }  
}  
  
void pop()
{      
    printf("%c",stack[top--]);  
}  
  
  
