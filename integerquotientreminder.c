// get two integer number, quotient and reminder them and print it on console

#include <stdio.h>

int getANumberFromUser() {
    int number;
    printf("Enter a number ");
    scanf("%d", &number);
    return number;
}

 int quotientTwoNumbers( int a,  int b) {
    return a / b;
}
 int reminderTwoNumbers( int a, int b){
    return a % b;
}

void main() {
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
     int quotient = quotientTwoNumbers(number1, number2);
     int reminder = reminderTwoNumbers(number1,number2);
    printf("Quotient is %d \n",quotient);
    printf("Reminder is %d", reminder);
}
