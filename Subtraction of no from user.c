// get two no from user and subtraction the numbers using format specifier and print it on console

#include <stdio.h>

int getANumberFromUser() {
    int i;
    printf("Enter a number ");
    scanf("%d", &i);
    return i;
}

int addTwoNumbers(int a, int b) {
    return a - b;
}

void main() {
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int subtraction = addTwoNumbers(number1, number2);
    printf("subtraction is %d", subtraction);
}
