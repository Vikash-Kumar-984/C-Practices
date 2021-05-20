#include<stdio.h>
int main()
{
    float a;
    printf("The time of the day: \n");
    for(a=00.01;a<12;a++)
    {
        printf("%.2f AM \n",a);
    }
    if (a=12)
    {
        printf("%.2f Noon \n",a);
    }
    for(a=12.01;a<24;a++)
    {
        printf("%.2f PM \n",a);
    }
    if (a=24)
    {
        printf("%.2f Midnight \n",a);
    }
    
    
}