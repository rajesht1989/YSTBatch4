// get two integer number, multiplication them and print it on console

#include <stdio.h>

int getANumberFromUser() {
    int number;
    printf("Enter a number ");
    scanf("%d", &number);
    return number;
}

int multiplicationTwoNumbers(int a, int b) {
    return a * b;
}

void main() {
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int multiplication = multiplicationTwoNumbers(number1, number2);
    printf("multiplication is %d", multiplication);
}



