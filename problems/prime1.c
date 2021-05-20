#include<stdio.h>
int main()
{
    int a,b;
    printf("THe prime number b/w 1 to 100 is : \n");
    for(a=1;a<100;a++)
    {
        b=2;
        for(b=2;b<a;b++)
        {
            if(a%b==0)
            break;
        }
        if(b==a)
        printf("%d \t",b);
    }
}