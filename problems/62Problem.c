#include<stdio.h>
int main()
{
    int a,n;
    float sum,fact;
    for (a=1;a<8;a++)
    {
        fact=1.0;
        for(n=1;n<=a;n++)
        fact=fact*n;
        sum=sum+a/fact;
    }
    printf("sum of series=%f",sum);


}