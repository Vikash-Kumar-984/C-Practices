#include<stdio.h>
int main()
{
    int num,a,b,c,s;
    printf("Enter the amount to be withdrawal \n");
    scanf("%d",&num);
    a=num/500;
    b=(num%500) /100;
    c=((num%500)%100) /50;
    s=a+b+c;
printf("The total number of 500 notes: %d\n",a);  
printf("The total number of 100 notes: %d\n",b);  
printf("The total number of 50 notes: %d\n",c); 

printf("THe minimum number of notes :%d",s);
return 0;
}