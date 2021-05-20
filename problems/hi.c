#include<stdio.h>
int main()
{
    int salary,da,hr;
    printf("Enter the basic salary \n ");
    scanf("%d",&salary);
    da=0.4*salary;
    hr=0.2*salary;
    printf("The dearness allowance is  =%d \n",da);
    printf("The house rent is =%d \n",hr);
    printf("The gross income is =%d \n",salary+da+hr);
    return 0;
}