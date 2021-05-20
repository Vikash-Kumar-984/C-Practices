#include<stdio.h>
int main()
{
    int num,rev,a,b,c;
    printf("Enter the 3-digit number: \n");
    scanf("%d",&num);
    a=num%10 *100 ;
printf("The reversed number is : %d\n",a);
    b=(num%100) /10 *10;
     printf("The reversed number is : %d\n",b);
     c=(num/100) *1;
      printf("The reversed number is : %d\n",c);
      rev=a+b+c;
      printf("The reversed number is %d",rev);
    return 0;
}