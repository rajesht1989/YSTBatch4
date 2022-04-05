// get two decimal number, division them and print it on console

#include <stdio.h>

float getANumberFromUser() {
    float number;
    printf("Enter a number ");
    scanf("%f", &number);
    return number;
}

float divideTwoNumbers(float a, float b) {
    return a / b;
}

void main() {
    float number1 = getANumberFromUser();
    float number2 = getANumberFromUser();
    float division = divideTwoNumbers(number1, number2);
    printf("Division is %f", division);
}
