#include<stdio.h>
int fact(int);
int main()
{int num;
int factorial;
 printf("Enter the number:\n");
 scanf("%d",&num);
 factorial=fact(num);
 printf("The factorial of the number is: %d",factorial);
}
int fact(int a)
{
    int i;
    int factorial=1;
    for(i=1;i<=a;i++)
    factorial=factorial*i;
    return(factorial);
    
}
