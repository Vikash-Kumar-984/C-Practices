#include<stdio.h>
int prime(int );
int main()
{   
    int num,a,b;
    printf("Enter the number to find the prime factor: \n");
    scanf("%d",&num);
    a=prime(b);
    printf("The prime factor of the given number is: %d",a);

}
int prime(int x)
{
    int i,j,k;
    for(i=2;i<x;i++)
    {
        if(x/i==1)
        printf("The last prime factor is:%d \n",i);
        break;
        if(x%i==0)
        {
            printf("The prime is:%d\n",i);
            j=x/i;
        }
    }
}