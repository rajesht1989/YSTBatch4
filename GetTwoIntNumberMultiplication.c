//Requirement:get two integer num, multiplication them and print it on console
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d", &number);
    return number;
}
int multiplicationTwoNumbers(int B,int P){
    return B * P;
}
void main() {
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int multiplication = multiplicationTwoNumbers(number1, number2);
    printf("multiplication is %d", multiplication);
}
