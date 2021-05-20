#include<stdio.h>
void printTable(int *mulTable,int num,int n){
    printf("enter the number \n");
    scanf("%d",&num);
    printf("The multiplication table of %d \n",num);
    
    for(int i=0;i<n;i++){
        mulTable[i]=num*(i+1);
    }
    for (int i=0;i<n;i++){
        printf("%dX%d=%d \n",num,i+1,mulTable[i]);
    }
    printf("********************\n");
}
int main()
{
int mulTable[3][10];
printTable(mulTable[0],0,10);
printTable(mulTable[1],5,10);
printTable(mulTable[2],7,10);
     return 0;
}