#include<stdio.h>
void printAdd(int a){
    printf("the address of variable a is %u\n",&a);
}
int main()
{
    int i=6;
    printf("the value of i is %d \n",*(&i));
    printAdd(i);
     printf("the address of variable a is %u \n",&i);
     return 0;
}
