// Get a four characters from user and print it on console
#include <stdio.h>


char getACharacterFromUser()
{
    char i;
    printf("Enter the character :");
    scanf("%c",&i);
    return i;
}

void main()
{
    char character1 = getACharacterFromUser();
    char character2 = getACharacterFromUser();
    char character3 = getACharacterFromUser();
    char character4 = getACharacterFromUser();
    printf("character is : %c %c %c %c", character1,character2,character3,character4);
}
