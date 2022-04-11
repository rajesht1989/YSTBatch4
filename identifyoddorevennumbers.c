// geta a number from user and identify the odd number or even number
#include<stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}
void identifyTheNumbers(int number){
    if(number % 2 == 0){
        printf("It's even number");
    } else {
        printf("it's odd number");
    }
    
}
int main(){
    int number = getANumberFromUser();
    identifyTheNumbers(number);
    return number;
}
