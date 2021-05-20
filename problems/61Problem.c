#include<stdio.h>
int main()
{
    int num,prime,i=2;
    printf("Enter the number \n");
    scanf("%d",&num);
    while (i<num)
    {
        prime=num%i;
        i++;
    }
    printf("THe value of prime is %d",prime);
        if (prime==0)
        {
            printf("The number %d is not prime \n",i-1);
        }
        else(prime!=0);
        {
            printf("The number %d is prime number \n",i);
        }
}