// get a  number from user and identify the greaterthan ten and lessthan twenty number
#include<stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}
void identifyTheNumber(int a){
    if(a<20 && a>10){
       printf("The given number is correct");
     } else {
        printf("The given number is invaild");
     }
}
int main(){
    int number = getANumberFromUser();
    identifyTheNumber(number);
    return number;
}
