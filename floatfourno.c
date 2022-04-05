// Get a four numbers from user and print it on console
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
    float number3 = getANumberFromUser();
    float number4 = getANumberFromUser();
    printf("Number is : %f %f %f %f",number1,number2,number3,number4);
}
