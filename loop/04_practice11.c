#include<stdio.h>
int main()
{
     int a,i=2,prime=0;
     printf("enteer the number \n");
     scanf("%d",&a);

     while(i<a){
        
         if (a%i==0)
         {  prime=1; 
             break; 
         }
          i++;
     }
     if (prime==1)
     {
         printf("the number is not prime\n",a);
     }
     else {
         printf("the number is prime \n",a);
     }
     return 0;
}