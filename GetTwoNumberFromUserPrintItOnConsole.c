// Requirement:Get two number from user & print it on console
#include <stdio.h>
int main(){
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    printf("Number is %d %d",number1,number2);
}
    int getANumberFromUser(){
    int i;
    printf("Enter a number");
    scanf("%d",&i);
    return i;
}
    
