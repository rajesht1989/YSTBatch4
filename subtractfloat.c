// get two decimal  number, subtraction them and print it on console

#include <stdio.h>

float getANumberFromUser() {
    float number;
    printf("Enter a number ");
    scanf("%f", &number);
    return number;
}

float subtractionTwoNumbers(float a, float b) {
    return a - b;
}

void main() {
    float number1 = getANumberFromUser();
    float number2 = getANumberFromUser();
    float subtraction = subtractionTwoNumbers(number1, number2);
    printf("subtraction is %f", subtraction);
}



