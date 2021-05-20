#include<stdio.h>
float po(float x,int y);
int main()
{
    float a,power;
    int b;
    printf("Enter the numbers: \n");
    scanf("%f %d",&a,&b);
    power=po(a,b);
    printf("The power of the given number is:%f",power);
}
float po(float x,int y)
{
    int i;
    float c=1;
    for(i=1;i<=y;i++)    {
        c=c*x;
    }
    return(c);
}
