#include<stdio.h>
#include<string.h>
int main()
{
     char *source="Wiry Vikash";//space is counted as lenght
     char target[25];
     strcpy(target,source);
     printf("the value of b is %s",target);
     return 0;
}