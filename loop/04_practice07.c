#include<stdio.h>
int main()
{
     int a=8,i;
    

     for(i=1;i<=10;i++)
    {
           int d=a*i;
         printf("the table of 8 is %d \n",d);
         d+=i;
         
         printf("sum is %d \n",d);
     }
     return 0;
}