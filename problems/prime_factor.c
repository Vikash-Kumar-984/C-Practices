#include<stdio.h>
int main()
{
    int i,num,a;
    printf("Enter the number :\n");
    scanf("%d",&num);
    for (i=2;i<num;i++)
    {
        if (num%i==0)
    {
        printf("The divisor is %d \n",i);
        
    } 
      
     }

}