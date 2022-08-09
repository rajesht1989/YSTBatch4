#include<stdio.h>
int getNumberFromUser(){
    int number;
    printf("enter a number ");
    scanf("%d",& number);
    return number;
}
int multiplicatTwoNumbers(int a, int b){
    return a*b;
}
void main(){
    int a = getNumberFromUser();
    int b = getNumberFromUser();
    int multiple = multiplicatTwoNumbers(a,b);
    printf("multiplication is %d",multiple);
}


