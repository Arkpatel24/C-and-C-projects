#include<stdio.h>
void test();
int m = 22, n = 44;     //m,n are global variables defined outside main() and can be accessed anywhere in the program
int a = 50, b = 80;     //a,b are global variables defined outside main() and can be accessed anywhere in the program
 
int main(int argc, char** argv)
{
   printf("All variables are accessed from main function \n");
   printf("values: m=%d:n=%d:a=%d:b=%d \n\n\n", m,n,a,b);
   test();
}
 
void test(int argc, char** argv)
{
   printf("All variables are accessed from test function \n");
   printf("values: m=%d:n=%d:a=%d:b=%d", m,n,a,b);
}
