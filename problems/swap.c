#include<stdio.h>
int swap(int ,int );
int main()
{
    int c,a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    printf("The value of swap before:%d %d \n",a,b);
    c=swap(a,b);
    //printf("The swapped value is : %d",c);

}
int swap(int x,int y)
{
    int z,t;
    z=x;
    x=y;
    y=z;
    printf("The swapped value after is:%d %d \n",x,y);
}