
// Get a float number from user and print it on console
#include <stdio.h>
 float getAFloatNumberFromUser(){
     float i;
     printf("enter a number");
     scanf("%f",&i);
     return i;
}
void main() {
    float number = getAFloatNumberFromUser();
    printf("Number is %f",number);
}
