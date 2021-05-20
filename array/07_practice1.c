#include<stdio.h>
int main()
{
     int array[10]={0,1,2,3,4,5,6,7,8,9};
     int *ptr=&array[0];
     printf("the value of 1st element is :%d \n",*ptr);
     ptr++;
     printf("the value of 2nd element is %d \n",*ptr);
     ptr++;
     printf("the value of 3rd element is %d \n",*ptr);
     return 0;
}