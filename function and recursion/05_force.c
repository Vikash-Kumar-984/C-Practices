#include<stdio.h>
float force();
 float force(){
     float mass,acc=9.8,f;
     printf("enter the mass of the body \n");
     scanf("%f",&mass);

     f=mass*acc;
     printf("the force exerted by the body is : %.2f N\n ",f);


 }


int main()
{
     force();
     return 0;
}