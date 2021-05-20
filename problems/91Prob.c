#include<stdio.h>
void sum(int *);
int main()
{
    int a,b,c,d,e;
    int f=a+b+c+d+e;
    printf("Enter the five numbers: \n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("sum is : %d \n",a+b+c+d+e);
   sum(&f);
    printf("%d \n",f);
    
}
void sum(int *su)
{
    int p,q,r,s,t;
    int j=*su;
        *su=p+q,r,s,t;
    printf("%d \n",*su);
printf("%d \n",j);
}