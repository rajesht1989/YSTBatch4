// Get a four float number from user and print it on console
#include <stdio.h>
void main() {
    float number1 = getAFirstFloatNumberFromUser();
    float number2 = getASecondFloatNumberFromUser();
    float number3 = getAThirdFloatNumberFromUser();
    float number4 = getAFourthFloatNumberFromUser();
    printf("Number is %f \n",number1);
    printf("Number is %f \n",number2);
    printf("Number is %f \n",number3);
    printf("Number is %f",number4);
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
int getAFourthFloatNumberFromUser(){
    float l;
    scanf("%f",&l);
    return l;
}


