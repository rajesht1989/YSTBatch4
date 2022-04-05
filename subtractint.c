// get two integer number, subtraction them and print it on console

#include <stdio.h>

int getANumberFromUser() {
    int number;
    printf("Enter a number ");
    scanf("%d", &number);
    return number;
}

int subtractionTwoNumbers(int a, int b) {
    return a - b;
}

void main() {
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int subtraction = subtractionTwoNumbers(number1, number2);
    printf("subtraction is %d", subtraction);
}



