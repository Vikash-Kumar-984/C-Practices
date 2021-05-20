#include<stdio.h>
void sumAndAvg(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg=*sum/2;
}
int main()
{
    int a,b,sum;float avg;
   a=8;b=9;
    sumAndAvg(a,b,&sum,&avg);
    printf("the vlaue of sum is %d \n",sum);
    printf("the value of avg is %f \n",avg);
    return 0;
}