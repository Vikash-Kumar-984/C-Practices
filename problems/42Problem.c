#include<stdio.h>
int main()
{
    char character;
    printf("Enter the character \n");
    scanf("%c",&character);
    if(character<90 && character>65)
    {
        printf("It is the capital letter");
    }
    if (character<132 && character>97)
    {
        printf("It is the small letter");
    }
    
}