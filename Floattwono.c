// Get a two numbers from user and print it on console
#include <stdio.h>


float getANumberFromUser()
{
    float i;
    printf("Enter the number :");
    scanf("%f",&i);
    return i;
}

void main()
{
    float number1 = getANumberFromUser();
    float number2 = getANumberFromUser();
    printf("Name is : %f %f", number1,number2);
}
