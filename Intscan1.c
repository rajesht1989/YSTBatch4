// Get a number from user and print it on console
#include <stdio.h>
void main() {
    int number = getANumberFromUser();
    printf("Number is %d",number);
}
 int getANumberFromUser(){
     int i; 
     scanf("%d",&i);
     return i;
}
