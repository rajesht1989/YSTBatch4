// Get a two character from user and print it on console
#include <stdio.h>


char getACharFromUser()
{
    char i;
    printf("Enter the number :");
    scanf("%c",&i);
    return i;
}

void main()
{
    char character1 = getANumberFromUser();
    char character2 = getANumberFromUser();
    printf("Name is : %c %c", character1, character2);
}
