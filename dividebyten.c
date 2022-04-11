// geta a number from user and identify the number is divide by ten
#include<stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}
void identifyTheNumber(int number){
    if(number / 10) {
    printf("The given number is correct");
    return 0;
} else {
    printf("Invaild number");
    return 0;
}
}
int main(){
    int number = getANumberFromUser();
    identifyTheNumber(number);
    return 0;
}
