#include<stdio.h>
int main()
{
     int a=36;
     int *p=&a;
       printf("the value of a is : %d \n",*p);
       printf("the value of a is : %d\n",p);
       printf("the value of a is : %d \n",a);
       p--;
       printf("the value of a is : %d \n",p);
       p--;
       printf("the value of a is : %d \n",p);
       p=p+3;
       printf("the value of a is : %d \n",p);

     return 0;
}