#include <stdio.h>
int getNumberFromUser(){
    int number;
    printf("Enter a Number");
    scanf("%d",&number);
    return number;
}
int addTwoNumbers(int a,int b){
    return a+b;
}
void main(){
    int a = getNumberFromUser();
    int b = getNumberFromUser();
    int addition = addTwoNumbers (a,b);
    printf ("%d",addition);
}
