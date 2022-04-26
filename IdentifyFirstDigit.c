// write a program to get a Number from user and identify the first digit of it
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number");
    scanf("%d", &number);
    return number;
}
void identifyTheFirstDigit(int number){
    int first= 0;
    for(int i=number;i>10;i/=10){
        first=i/10;
        printf("%d\n",first);
    }
}
int main(){
    identifyTheFirstDigit(getANumberFromUser());
    return 0;
}
