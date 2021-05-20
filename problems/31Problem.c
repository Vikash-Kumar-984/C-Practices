#include<stdio.h>
int main()
{
    int cp,sp,net;
    printf("Enter the cost price of product: \n");
    scanf("%d",&cp);
    printf("Enter the sell price of product: \n");
    scanf("%d",&sp);
    if(cp<sp)
    {
        printf("The net profit is %d \n",sp-cp);
    }
    else
    {
        printf("The loss is %d \n",cp-sp);
    }
    
}