// get a desimal number from user, multiple them and print it on console
// Online C compiler to run C program online
#include <stdio.h>

float getNumberFromUser(){
    float a;
    printf("Enter a Number : ");
    scanf("%f",&a);
    return a;
}
float getMultipleNumber(float a,float b){
return a*b; 
}
void main(){
    float number1 = getNumberFromUser();
    float number2 = getNumberFromUser();
    float multipled = getMultipleNumber(number1,number2);
    printf(" Multiple Number %f",multipled);
}
