#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num,i,a,b;
    printf("Enter the number:");
    scanf("%d",&num);
    
 
         for(i=2;i<num;i++){
         if(num%i==0)
         {
            a=num/i;
            
            for(b=2;b<a;b++)
            printf("The value of a is: %d \n",a);
            {
                 if(a%b==0)
                 {
                    printf("The another divisor is :%d \n",b);
                    break;
                 }
                 break;
            }
         }
         
         
    }
}