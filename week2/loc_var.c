
#include<stdio.h>
int test();
 
int main(int argc, char** argv)
{
   int m = 22, n = 44;
    // m, n are local variables of main function that means m and n variables are having scope within this main function only.
    /* These are not visible to test funtion.If you try to access a and b in this function, you will get 'a' undeclared and 'b' undeclared error */
   printf("values : m = %d and n = %d\n", m, n);
  // printf("values : a = %d and b = %d", a, b);
   test();
}
 
int test()
{
   int a = 50, b = 80;
        // a, b are local variables of test function that means a and b variables are having scope within this test function only.
        /*These are not visible to main function. If you try to access m and n in this function,you will get 'm' undeclared and 'n' undeclared error */
   printf("values : a = %d and b = %d", a, b);
  // printf("values : m = %d and n = %d\n", m, n);
   
}

