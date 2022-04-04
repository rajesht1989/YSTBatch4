// Get a two number from user and print it on console
#include <stdio.h>
void main() {
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    printf("Number is %d \n",number1);
    printf("Number is %d",number2);
}
 int getANumberFromUser(){
     int i;
     printf("Enter a Number");
     scanf("%d",&i);
     return i;
}



