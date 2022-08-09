#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number");
    scanf("%d", &number);
    return number;
}
int identifyTheRemainder(int a, int b){
    return a % b;
}
int main(){
    int number1=getANumberFromUser();
    int number2=getANumberFromUser();
    int remainder =identifyTheRemainder(number1,number2);
    printf("Remainder is %d",remainder);
    return 0;
}
