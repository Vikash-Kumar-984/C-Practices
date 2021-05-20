#include<stdio.h>
void d(int *a);

int main()
{
     int c=6;
     printf("the value of a is %d \n",c);
     d(&c);
     printf("the value of a after the function is :%d \n",c);
     return 0;
}
void d(int *a){
    int d;
  d=*a;
  *a=10+a;
}