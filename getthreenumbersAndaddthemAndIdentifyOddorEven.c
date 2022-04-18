// get a three number from user and add them if it is identify the even number
#include<stdio.h>

int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}
int addThreeNumberFromUser(int a,int b,int c){
  return (a + b) + c ;
}
void identifyTheNumbers(int a,int b,int c){
    if(((a + b) + c) % 2 == 0){
        printf("Even number");
    } else {
        printf("Odd number");
    }
    
}
int main(){
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int number3 = getANumberFromUser();
    int addition = addThreeNumberFromUser(number1,number2,number3);
    printf("Addition is %d \n",addition);
    identifyTheNumbers(number1,number2,number3);
    return 0;
}
