#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year ");
    scanf("%d",&year);
    if(year%400==0 || year%100!=0 && year%4==0)
    {
        printf("It is the leap year");
    }
    else
    {
        printf("It is not the leap year");
    }
    
}