#include<stdio.h>
float temp();

float temp(){
    float c,f;
    printf("enter the temperature in celcius \n");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("the value of celcius in fareinght %f \n",f);
}
int main()
{
    temp();
     return 0;
}