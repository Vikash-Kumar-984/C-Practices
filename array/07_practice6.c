#include<stdio.h>
int count(int *arr,int n){
    int positive_count=0;
for (int i=0;i<n;i++){
    if(arr[i]>0)
    positive_count++;    
}
return positive_count;
}

int main()
{ 
int arr[]={1,-2,3,6,7,-4,-7,-8,-6};
printf("the value of array is:");
for(int a=0;a<9;a++){
       printf(",%d",arr[a]);
    }
    printf("\n");

    printf("positive count is %d \n",count(arr,7));
     return 0;
}