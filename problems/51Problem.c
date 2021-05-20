#include<stdio.h>
int main()
{
    float otpay;
    int hour,i=1,a;
    while (i<=10)
    {
        printf("The number of hours worked by the employee %d:\n",i);
        scanf("%d",&hour);
        if(hour>40)
        {
            a=hour-40;
            printf("The number of overtime work is : %d \n",a);
            otpay=a*12;
            printf("The overtime payout is :%f \n",otpay);
        }
        else
        {
            printf("There is no overtime payout \n");
        }
        i++;
        
    }
    
}