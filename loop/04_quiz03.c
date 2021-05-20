#include<stdio.h>
int main()
{
     int i;
     int n;
     printf("enter the value of n:\n");
     scanf("%d",&n);

     for(i=0;i<n;i++)
     {
         printf("the first n natural number is:%d \n",i);
     }
     return 0;
}