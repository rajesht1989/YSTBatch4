// get a desimal number from user,add them and print it on console 
#include <stdio.h>

float getNumberFromUser(){
    float a;
    printf("Enter a Number : ");
    scanf("%f",&a);
    return a;
}
float getAddNumber(float a,float b){
return a+b; 
}
void main(){
    float number1 = getNumberFromUser();
    float number2 = getNumberFromUser();
    float addnum = getAddNumber(number1,number2);
    printf("Divisoned Number %f",addnum);
}
