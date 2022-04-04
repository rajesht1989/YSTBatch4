// Get a two numbers from user and print it on console
#include <stdio.h>
int getANumberFromUser()
{
    int i;
    printf("Enter the number :");
    scanf("%d",&i);
    return i;
}

void main()
{
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    printf("Name is : %d %d", number1,number2);
}
