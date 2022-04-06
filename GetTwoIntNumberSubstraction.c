//Requirement:get two integer num, Substraction them and print it on console
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d", &number);
    return number;
}
int substractionTwoNumbers(int B,int P){
    return B - P;
}
void main() {
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int substraction = substractionTwoNumbers(number1, number2);
    printf("Substraction is %d", substraction);
}
