// Get a three float number from user and print it on console
#include <stdio.h>
 float getAFloatNumberFromUser(){
     float i; 
     printf("enter a number" );
     scanf("%f",&i);
     return i;
}
void main() {
    float number1 = getAFloatNumberFromUser();
    float number2 = getAFloatNumberFromUser();
    float number3 = getAFloatNumberFromUser();
    printf("Number is %f \n",number1);
    printf("Number is %f \n",number2);
    printf("Number is %f",number3);
}
