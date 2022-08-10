//get two decimal no and subtraction the number using format specifier and print it on console
#include <stdio.h>
float getFloatNumberFromUser(){
    float i;
    printf("Enter A Number");
    scanf("%f",&i);
    return i;
}

float addTwoNumbers(float a,float b){
    return a - b;
}
void main(){
    float number1 = getFloatNumberFromUser();
    float number2 = getFloatNumberFromUser();
    float subtraction = addTwoNumbers(number1,number2);
    printf("subtraction is %f",subtraction);
}
