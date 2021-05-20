#include<stdio.h>
int main()
{
     int val[10];
     int i;
     int a;
     printf("please enter the value of the multipler: \n");
     scanf("%d",&a);
     for(i=1;i<=10;i++)
    {
        printf("the multiplication table of %d is: %d \n",a,a*i);
    }
     return 0;
}