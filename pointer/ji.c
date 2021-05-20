#include<stdio.h>
int main()
{
     int a=6;
     int *j;
     j=&a;
     
     printf("the value is %d",a);
     printf("the value is %d",*(&j));

     return 0;
}