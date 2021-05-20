#include<stdio.h>
#include<string.h>
int main()
{
     char str[36]="Vikash ";
     char *str2="Kumar ";
     strcat(str,str2);
     printf("the stirng is %s",(str));
     return 0;
}