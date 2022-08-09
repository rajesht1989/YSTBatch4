#include<stdio.h>
int getNumberFromUser(){
    int number;
    printf("enter a number ");
    scanf("%d",& number);
    return number;
}
int subtractTwoNumbers(int a, int b){
    return a-b;
}
void main(){
    int a = getNumberFromUser();
    int b = getNumberFromUser();
    int subtract = subtractTwoNumbers(a,b);
    printf("Subtraction is %d",subtract);
}
