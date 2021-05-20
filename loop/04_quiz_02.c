#include<stdio.h>
int main()
{
     int i=0;
     int n;
     printf("enter the value of n:%d \n",n);
     scanf("%d",&n);

     do{
         printf("the value of i: %d \n",i);
         i++;
     }
     while (i<n);
     return 0;
}