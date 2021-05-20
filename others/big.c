#include<stdio.h>
int main()
{
     int a,b,c,d;
     printf("enter the four numbers: \n");
     scanf("%d %d %d %d ",&a,&b,&c,&d);

     if (a>b){
         if (a>c){
             if (a>d){
                 printf("%d is largest \n",a);
             }
         }
     }
     else if (b>c){
         if (b>d){
             printf("%d is largest \n",b);
         }
         else {
             printf("%d is largest \n",c);}
     }
     else {("%d is largest ",d);}


     return 0;
}