#include<stdio.h>
#include<math.h>

int main()
{
     int a,b;
     printf("please enter the two numbers : \n");
     scanf("%d %d",&a,&b);

     int sum=a+b;
     int diff=a-b;
     int mul=a*b;
     int div=a/b;
     float rem=a%b;
     double power=a^b;


     
     printf("sum is :%d \n",sum);
     printf("diff is :%d \n",diff);
     printf("product is :%d \n",mul);
     printf("quotient is :%d \n",div);
     printf("remainder is : %.4f \n",rem);
     printf("power is :%d \n",power);

     return 0;
}