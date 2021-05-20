#include<stdio.h>
int factorial(int a);
int main()

{
     int n;
     printf("please enter the required number");
     scanf("%d",&n);

     printf("Factorial of the given number is :%d \n",factorial(n));
     return 0;
}
int factorial(int a){
    if (a>1)
    return a*factorial( a-1);

    else
    {
        return 1;
    }
}