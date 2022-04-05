// get two decimal  number, multiplication them and print it on console

#include <stdio.h>

float getANumberFromUser() {
    float number;
    printf("Enter a number ");
    scanf("%f", &number);
    return number;
}

float multiplicationTwoNumbers(float a, float b) {
    return a * b;
}

void main() {
    float number1 = getANumberFromUser();
    float number2 = getANumberFromUser();
    float multiplication = multiplicationTwoNumbers(number1, number2);
    printf("multiplication is %f", multiplication);
}



