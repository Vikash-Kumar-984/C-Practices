#include<stdio.h>
int main()
{
     int studentMarks[5];
     int i;

     for(i=0;i<5;i++)
     {
         printf("enter the student's %d marks: \n",i+1,studentMarks);
        scanf("%d",&studentMarks[i]);
     }
     for(i=0;i<5;i++)
     {
         printf("the marks of students %d is %d \n",i+1,studentMarks[i]);
     }
     return 0;
}