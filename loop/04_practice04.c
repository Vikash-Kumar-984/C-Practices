#include<stdio.h>
int main()
{
      int i=1,sum=0,n=10;
     do{
         printf("sum of %d is :%d \n",i,sum);
         sum+=i;
         i++;
     }
     while (i<=n);
    //  {
    //      sum +=i;
    //       printf("the sum of first %d is:%d \n",i,sum);
    //     i++;
    //  }
      
    
     return 0;
}