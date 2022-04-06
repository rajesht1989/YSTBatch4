// Online C compiler to run C program online
#include <stdio.h>

float getNumberFromUser(){
    float a;
    printf("Enter a Number : ");
    scanf("%f",&a);
    return a;
}
float getDivisonedNumber(float a,float b){
return a/b; 
}
void main(){
    float number1 = getNumberFromUser();
    float number2 = getNumberFromUser();
    float divisoned = getDivisonedNumber(number1,number2);
    printf("Divisoned Number %f",divisoned);
}
