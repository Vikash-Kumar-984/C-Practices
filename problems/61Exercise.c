#include<stdio.h>
int main()
{
    int a,b,mul;
    {
        printf("Enter the number");
        scanf("%d",&a);
        for(b=1;b<=10;b++)
        {
            mul=a*b;
            printf("The multiplication table %d * %d is:%d \n",a,b,mul);

        }
    }
}