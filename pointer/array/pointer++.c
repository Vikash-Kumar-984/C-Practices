#include<stdio.h>
int main()
{
    int a=36;
    int *i=&a;
    
    i=i+3;
    i++;
   printf("%d",i);
     return 0;
}