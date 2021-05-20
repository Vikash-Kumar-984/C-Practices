#include<stdio.h>
int main()
{
    int input,i,fact;
    printf("Enter the input\n");
       scanf("%d",&input);
        for(fact=i=1;i<=input;i++)
        {
            fact=fact*i;
       /*while (i>=input)
       {
           fact=fact*i;
           i++;
       }*/}
       printf("THe factorial of the number is :%d \n",fact);
}