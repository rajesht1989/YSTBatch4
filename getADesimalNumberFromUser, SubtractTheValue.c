// get a number from user, subtract them and print it on console 
#include <stdio.h>

float getNumberFromUser(){
    float a;
    printf("Enter a Number : ");
    scanf("%f",&a);
    return a;
}
float getSubtractionNumber(float a,float b){
return a-b; 
}
void main(){
    float number1 = getNumberFromUser();
    float number2 = getNumberFromUser();
    float subtract = getSubtractionumber(number1,number2);
    printf(" Subtraction Number %f", subtract);
}
