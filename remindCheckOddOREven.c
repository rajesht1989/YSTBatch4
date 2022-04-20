// get a two number from user and remind them if it is identify the even number
#include<stdio.h>

int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}
int remindTwoNumberFromUser(int i,int j){
  return i%j;
}
void identifyOddOrEven(int i,int j){
    if((i%j)% 2 == 0){
        printf("Even number");
    } else {
        printf("Odd number");
    }
    
}
int main(){
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int division = remindTwoNumberFromUser(number1,number2);
    printf(" Reminder is %d \n",division);
    identifyOddOrEven(number1,number2);
    return 0;
}
