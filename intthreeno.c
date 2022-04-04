// Get a three numbers from user and print it on console
#include <stdio.h>


int getANumberFromUser()
{
    int i;
    printf("Enter the number :");
    scanf("%f",&i);
    return i;
}

void main()
{
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int number3 = getANumberFromUser();
    printf("Name is : %d %d %d", number1,number2,number3);
}
