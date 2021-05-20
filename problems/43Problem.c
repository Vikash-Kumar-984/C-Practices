#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of the triangle \n");
    scanf("%d %d %d",&a,&b,&c);
    if (a<b+c && b<a+c && c<a+b)
    {
        printf("It is valid triangle");
    }
    else
    {
        printf("It is not a valid triangle");
    }
    
}