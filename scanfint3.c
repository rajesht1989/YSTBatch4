// Get a three number from user and print it on console
#include <stdio.h>
void main() {
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int number3 = getANumberFromUser();
    printf("Number is %d \n",number1);
    printf("Number is %d \n",number2);
    printf("Number is %d",number3);
}
 int getANumberFromUser(){
     int i;
     printf("Enter a Number");
     scanf("%d",&i);
     return i;
}



