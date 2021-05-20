#include<stdio.h>
int main()
{
     int i=1,a,mul=1;
     printf("enter the number \n");
     scanf("%d",&a);

     for(i;i<=a;i++)
    {
        mul *=i;
        printf("the factorial of the number  is %d \n",mul);
    }
     return 0;
}