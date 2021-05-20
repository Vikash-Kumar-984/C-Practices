#include<stdio.h>
int main()
{
     int a[2][3];
     printf("enter the value of 1st element: \n");
     scanf("%d %d",&a[0][1],&a[1][1]);
     printf("the value of 1st element is :%d \n",a[0][1]);
     printf("the value of 2nd element is :%d",a[1][1]);
     return 0;
}