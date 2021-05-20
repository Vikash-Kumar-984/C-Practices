#include<stdio.h>
int main()
{
    int a,b,i,power;
    printf("The number to the power: \n");
    scanf("%d%d",&a,&b);
    power=i=1;
    while (i<=b)
    {
     power=power*a;
     i++;
    }   
     printf("The value of power is %d \n",power);   
}