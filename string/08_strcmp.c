#include<stdio.h>
#include<string.h>
int main()
{
     char str[36]="Vikash ";
     char *str2="Kumar ";
     int val=strcmp(str,str2);
     printf("the stirng is %d",(val));
     return 0;
}