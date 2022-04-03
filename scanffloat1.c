

// Get a float number from user and print it on console
#include <stdio.h>
void main() {
    float number = getAFloatNumberFromUser();
    printf("Number is %f",number);
}
 int getAFloatNumberFromUser(){
     float i; 
     scanf("%f",&i);
     return i;
}
