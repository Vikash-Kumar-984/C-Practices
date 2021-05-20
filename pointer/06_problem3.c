#include<stdio.h>
int tentimes(int *a);
int main()
{
     int b=2; 
     printf("the value of a before address is : %d \n",b);
     tentimes(&b);
     printf("the value of a after address is :%d \n",b);
     
     return 0;
}
int tentimes(int *a){
*a=*a *10;
return 0;
}