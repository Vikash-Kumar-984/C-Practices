#include<stdio.h>
int main()
{
    int num,i,mul;
    for(num=2;num<9;num++)
  {   
    //printf("The value of num is %d",num);
    for(i=1;i<=10;i++)
    {   
        mul=num*i;
        printf("%d * %d is :%d \n",num,i,mul);
    }
    printf("\n");
  }
  return 0;
}