#include<stdio.h>
#include<stdlib.h>
int main()
{
    int y,i,fact,prime,np,input,odd,even,ex,num; char want;
    while(1) 
    {   
    printf("\n Enter the works to be done \n");
    printf("Enter 1 for factorial:\n"); 
    printf("Enter 2 for prime or not:\n"); 
    printf("Enter 3 for odd or even:\n"); 
    printf("Enter 4 for exit:\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
       printf("Enter the input\n");
       scanf("%d",&input);
        for(fact=i=1;i<=input;i++)
        {
            fact=fact*i;
        }
       printf("THe factorial of the number is :%d \n",fact);
    break;
    case 2:
         printf("Enter the value:\n");
         scanf("%d",&input);
         for(i=2;i<=input;i++)
         {
            if (input%i==0)
             break;
         }
         if (i==input)
         {
            printf("The number is Prime Number \n");
         }
         
         else
         {
             printf("The number is not prime number:");
         }
        break;
    case 3:
         printf("Enter the number for even or odd \n");
         scanf("%d",&input);
         if (input%2==0)
         {
           printf("The number is Even \n");
         }
         else
         {
             printf("THe number is Odd \n");
         }
        break ; 
    case 4:
         printf("Thank you for using programme :) \n");
         exit (0);     
         
    }
}
}