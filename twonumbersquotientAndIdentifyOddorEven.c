// get a two number from user and divide them if it is identify the even number
#include<stdio.h>

int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}
int diviTwoNumberFromUser(int a,int b){
  return (a / b) ;
}
void identifyTheNumbers(int a,int b){
    if((a / b) % 2 == 0){
        printf("Even number");
    } else {
        printf("Odd number");
    }
    
}
int main(){
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int quotient = diviTwoNumberFromUser(number1,number2);
    printf("Quotient is %d \n", quotient);
    identifyTheNumbers(number1,number2);
    return 0;
}
