// C program to illustrate strings 

#include<stdio.h> 
#include<string.h>

int main(int argc, char** argv)
{  
		char str[10];
		char str1[10];
		int i;
	//	scanf ("%s",str);           // Enter                 Hello How are you
	 //   printf("%s",str);  	       // prints ony             Hello
	  
	    gets(str); 
		gets(str1);
		scanf("%d",&i);
		strncat(str,str1,i);              // Enter                     Hello How are you
	    printf("%s",str);          // prints exactly:         Hello How are you
	 
	    
} 

