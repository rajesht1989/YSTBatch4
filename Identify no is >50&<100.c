//get a number from user and if the no is greaterthan ten and lessthan twenty
#include <stdio.h>
int getANumberFromUser(){
    int b;
    printf("Enter a Number");
    scanf("%d",&b);
    return b;
}
void identifyTheNumberIsAboveFiftyAndBelowHundred(int a){
    if (a>50){
        printf("Above Fifty Is %d",a);
    }
    else {
        printf("Below Fifty Is %d",a);
    }
    if (a<100){
        printf("Below Hundred Is %d",a);
    }
    else{
        printf("Above Hundred Is %d",a);
    }
}
void main(){
    int number= getANumberFromUser();
    identifyTheNumberIsAboveFiftyAndBelowHundred(number);
    
}
