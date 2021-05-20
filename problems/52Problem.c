#include<stdio.h>
int main()
{
    int num,fact,i=1;
    printf("Enter the number: \n");
    scanf("%d",&num);
    fact=i=1;
    while (i<=num)
    {   
        fact=fact*i;
        i++;
    }
    printf("The factorial of %d is: %d \n",num,fact);
}