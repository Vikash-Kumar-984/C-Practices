#include<stdio.h>
int  factorial(int x);

  int factorial(int x)
    {
    if (x==0 || x==1)
    return 1;
    else
    {
        return x * factorial(x-1);
    }
    }


 int main()
    {int a;
    printf("enter the number \n");
    scanf("%d",&a);
    printf(" the value of  number %d \n",factorial(a));
    return 0;
    }

  

