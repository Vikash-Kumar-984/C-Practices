#include<stdio.h>
int main()
{
    int math,sci,eng,total,percent;
    printf("Enter the marks obtained in maths \n");
    scanf("%d",&math);
    printf("Enter the marks obtained in science \n");
    scanf("%d",&sci);
    printf("Enter the marks obtained in eng \n");
    scanf("%d",&eng);
    total=math+eng+sci;
    printf("Total marks=%d",total);
    percent=300/total ;
    printf("Percent=%d",percent);
    }