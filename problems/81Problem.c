#include<stdio.h>
int fact(int);
int main()
{
    int a;
    int factorial;
    printf("Enter the number to be factorial: \n");
    scanf("%d",&a);
    factorial=fact(a);
    printf("The value of the factorial is: %d \n",factorial);
    printf("ENJOY THE CODES :)");
}
int fact (int num)
{
    int factorial=1;
    int i=1;
    for(i=1;i<=num;i++)
    factorial=factorial*i;
    return(factorial);
}