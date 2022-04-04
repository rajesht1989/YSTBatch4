// Get a float number from user and print it on console
#include <stdio.h>
void main()
{
    float number = getANumberFromUser();
    printf("Number is :%f",number);
}
float getANumberFromUser()
{
    float i;
    printf("Enter a number :");
    scanf("%f",&i);
    return i;
}
