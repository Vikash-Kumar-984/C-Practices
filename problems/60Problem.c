#include<stdio.h>
int main()
{
    int num,i;
    printf(" Prime number b/w 1 to 100:");
for (num=1;num<=100;num++)
 { 
    i=2;
    for (i=2;i<num;i++)
    {
        if(num%i==0)
        break;
    } 
    if(i==num)
    printf("%d is the prime number \n",num);
    else
    {
        printf(" %d is not a prime number \n",num);
    }
    
 }
}