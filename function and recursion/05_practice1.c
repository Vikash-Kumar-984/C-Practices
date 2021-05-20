#include<stdio.h>
int average();

int average()
{
    int a,b,c;
    printf("enter the three numbers \n");
    scanf("%d %d %d",&a, &b, &c);

    printf("the average of the three numbers are %d \n",(a+b+c)/3);
}


int main()
{
     average();
     return 0;
}