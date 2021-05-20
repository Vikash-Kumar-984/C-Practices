#include<stdio.h>
void wrong_swap(int a,int b);
void swap(int *a,int *b);
int main()
{
     int a=6,b=8;
     printf("the value  before swap is %d and %d \n",a,b);

     wrong_swap(a,b);
     printf("the value  after swaap is %d and %d \n",a,b);

     swap(&a,&b);
     printf("the value  after REAL swaap is %d and %d \n",a,b);
     return 0;
}
void wrong_swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}