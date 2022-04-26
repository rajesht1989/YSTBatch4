// write a program to get a two Numbers from user add them and print it on console 
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number");
    scanf("%d", &number);
    return number;
}
int additionTwoNumber(int b,int p){
    return (b+p);
}
void main(){
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int addition = additionTwoNumber(number1, number2);
    printf("Addition is %d", addition);
}
