// get two integer number, division them and print it on console

#include <stdio.h>

int getANumberFromUser() {
    int number;
    printf("Enter a number ");
    scanf("%d", &number);
    return number;
}

int divideTwoNumbers(int a, int b) {
    return a / b;
}

void main() {
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int division = divideTwoNumbers(number1, number2);
    printf("Division is %d", division);
}
