#include<stdio.h>
#include<math.h>
void area();

void area(){
    int a;
    printf("enter the side of square \n");
    scanf("%d",&a);
    printf("area of square is %f \n",pow(a,2));
}
int main()
{
     area();
     return 0;
}