// write a program to get a Numbers from user and identify the last Number print it on console 
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number");
    scanf("%d", &number);
    return number;
}
void idendifyLastNumbers(int n){
    int a = n % 10;
    printf ("last number is : %d",a);
}
void main(){
    idendifyLastNumbers(getANumberFromUser());
}

