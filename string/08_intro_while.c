#include<stdio.h>
int main()
{
     //char str[]={'w','i','r','y','\0'};
     char str[]="wiry";
        char *ptr=str;
            while(*ptr!='\0'){
            printf("%c",*ptr);
            ptr++;
            }
    //  printf("%s",str);
     return 0;
}