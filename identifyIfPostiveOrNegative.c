// get number from user identity if postive or negative .
#include <stdio.h>
float getNumberFromUser(){
    float number;
    printf("Enter a number ");
    scanf("%f",&number);
    return number;
}
float identifyTheNumber(float number){
    if(number>=0.0){
        printf("Your enter positive number");
    } else {
        printf("your enter negative number");
}
}
void main (){
    float number = getNumberFromUser();
    identifyTheNumber(number);
