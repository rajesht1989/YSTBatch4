// write a program and get no from user and addthem print it console

#include <stdio.h>
int getANumberFromUser(){
    int i;
    printf("Enter A Number ");
    scanf("%d",&i);
    return i;
}
 int additionTwoNumber(int a,int b){
     return (a+b);
 }
 

void main() {
  int number1 = getANumberFromUser();
  int number2 = getANumberFromUser();
  int add = additionTwoNumber(number1, number2);
  
    printf("addition %d",add);
    
    
}
