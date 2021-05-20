#include<stdio.h>
int main()
{
 int  num,i,a,pos=0,neg=0;
 printf("Enter the how many numbers to check:\n");
 scanf("%d",&num);
 for (i=1;i<=num;i++)
 {
     printf("Enter your input: \n");
     scanf("%d",&a);

     if (a>0)
     {
        pos++;
     
        printf("The number of positive number is %d \n",pos);
     }  
     if (a<0)
     {
         neg++;  
         printf("The number of negative number is %d \n",neg); 
    }    
 }   
}