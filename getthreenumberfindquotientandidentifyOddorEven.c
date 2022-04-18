// get a three number from user and divide and find quotient  them if it is identify the even number
#include<stdio.h>

int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}
int diviThreeNumberFromUser(int a,int b,int c){
  return (a / b) / c ;
}
void identifyTheNumbers(int a,int b,int c){
    if(((a / b) / c) % 2 == 0){
        printf("Even number");
    } else {
        printf("Odd number");
    }
    
}
int main(){
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int number3 = getANumberFromUser();
    int quotient = diviThreeNumberFromUser(number1,number2,number3);
    printf("Quotient is %d \n", quotient);
    identifyTheNumbers(number1,number2,number3);
    return 0;
}
