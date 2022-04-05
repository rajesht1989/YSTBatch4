// Get a number and the decimalnumber and character from user and print it on console
#include <stdio.h>


int getANumberFromUser()
{
    int i;
    printf("Enter the number :");
    scanf("%d",&i);
    return i;
}
float getADecimalNumberFromUser()
{
    float n;
    printf("Enter the decimalnumber :");
    scanf("%f",&n);
    return n;
}
char getACharacterFromUser()
{
    char a;
    printf("Enter the character :");
    scanf("%c",&a);
    return a;
}

void main()
{
    int number = getANumberFromUser();
    float decimalnumber = getANumberFromUser();
    char character = getACharacterFromUser();
    printf("Value is : %d %f %c",number,decimalnumber,character);
}
