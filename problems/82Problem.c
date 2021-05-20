#include<stdio.h>
#include<math.h>
float power(float,int);
int main()
{
  float x,pow;
  int y;
  printf("Enter the two numbers: \n");
  scanf("%f %d",&x,&y);
  pow=power(x,y);
  printf("The power of the required number is :%f",pow);
}

float power(float a,int b)
{int p;
  p=pow(a,b);
  return(p);
}