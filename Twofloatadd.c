// get two decimal numbers, add them and print it on console

#include <stdio.h>

float getANumberFromUser() {
    float number;
    printf("Enter a number ");
    scanf("%f", &number);
    return number;
}

float addTwoNumbers(float a, float b) {
    return a + b;
}

void main() {
    float number1 = getANumberFromUser();
    float number2 = getANumberFromUser();
    float addition = addTwoNumbers(number1, number2);
    printf("Addition is %f", addition);
}



