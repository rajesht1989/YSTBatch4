// get two integer number, add them and print it on console

#include <stdio.h>

int getANumberFromUser() {
    int number;
    printf("Enter a number ");
    scanf("%d", &number);
    return number;
}

int addTwoNumbers(int a, int b) {
    return a + b;
}

void main() {
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int addition = addTwoNumbers(number1, number2);
    printf("Addition is %d", addition);
}



