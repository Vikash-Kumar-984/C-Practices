#include<stdio.h>
int main()
{
     int a;
     printf("enter the number :%d \n");
     scanf("%d",&a);

     for(int i=10;i;i--)
     {
         printf("the  number %d  is :%d\n",a,i*a);
     }
     return 0;
}