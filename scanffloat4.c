// Get a four float number from user and print it on console
#include <stdio.h>
void main() {
    float number1 = getAFloatNumberFromUser();
    float number2 = getAFloatNumberFromUser();
    float number3 = getAFloatNumberFromUser();
    float number4 = getAFloatNumberFromUser();
    printf("1st Number is %f \n",number1);
    printf("2nd Number is %f \n",number2);
    printf("3rd Number is %f \n",number3);
    printf("4th Number is %f",number4);
}
 int getAFloatNumberFromUser(){
     float i; 
     scanf("%f",&i);
     return i;
}



