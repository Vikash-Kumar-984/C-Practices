#include<stdio.h>
void areaperi(int ,float *,float *);
int main()
{
    float area,peri;
    int radius;
    printf("Enter the radius: \n");
    scanf("%d",radius);
    areaperi(radius,&area,&peri);
    
}
void areaperi(int a,float *b,float *c)
{
    *b=3.14*(a*a);
    *c=(2*3.14)*a;
    printf("Area is :%f \n",*b);
    printf("Perimeter is : %f \n",*c);
}