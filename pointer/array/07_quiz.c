#include<stdio.h>
int main()
{
     int marks[6];
     printf("enter the marks of 6 students :\n");
     scanf( "%d %d %d %d %d %d" ,&marks[0],&marks[1],&marks[2],&marks[3],&marks[4],&marks[5]);
     printf("the marks of students are : %d %d %d %d %d %d \n",marks[0],marks[1],marks[2],marks[3],marks[4],marks[5]);
     return 0;
}