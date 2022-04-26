// get two number from user add them and print it on console 
#include <stdio.h>

int getNumberFromUser(){
    int a;
    printf(" Please Enter A Number ");
    scanf("%d",&a);
    return a;
}
int addNumber(int a,int b){
    return a+b;
}
void main(){
    int number = getNumberFromUser();
    int number1 = getNumberFromUser();
    int add = addNumber(number,number1);
    printf("Add Valuse is %d ",add);
}
