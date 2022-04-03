// Get a three float number from user and print it on console
#include <stdio.h>
void main() {
    float number1 = getAFirstFloatNumberFromUser();
    float number2 = getASecondFloatNumberFromUser();
    float number3 = getAThirdFloatNumberFromUser();
    printf("Number is %f \n",number1);
    printf("Number is %f \n",number2);
    printf("Number is %f",number3);
}
 int getAFirstFloatNumberFromUser(){
     float i; 
     scanf("%f",&i);
     return i;
}
int getASecondFloatNumberFromUser(){
    float j;
    scanf("%f",&j);
    return j;
}
int getAThirdFloatNumberFromUser(){
 float k;
 scanf("%f",&k);
 return k;
}
