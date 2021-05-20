#include<stdio.h>
int main()
{
     int a,i=2,prime=0;
     printf("enter the number \n");
     scanf("%d",&a);

     for(i;i<a;i++)
     {
         if(a%i==0)
         {prime=1;
         break;}
     }
     if (prime==1){
         printf("the number %d is not prime no. \n",a);
     }
         else{
             printf("the number %d is prime no. \n",a);
         }

     return 0;
}