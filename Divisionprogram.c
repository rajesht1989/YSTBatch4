#include<stdio.h>
int getNumberFromUser(){
    int number;
    printf("enter a number ");
    scanf("%d",& number);
    return number;
}
int DivisionTwoNumbers(int a, int b){
    return a/b;
}
void main(){
    int a = getNumberFromUser();
    int b = getNumberFromUser();
    int Division = DivisionTwoNumbers(a,b);
    printf("Division is %d",Division);
}





