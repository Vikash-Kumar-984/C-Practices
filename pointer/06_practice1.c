#include<stdio.h>
int main()
{
     int a;
     a=10;
     printf("the address of variable is : %u \n",&a);
     printf("the value of variable is : %d \n",*(&a));
     
          return 0;
}