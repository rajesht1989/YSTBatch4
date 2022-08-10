//get a number from user and if the no is greaterthan ten and lessthan twenty
#include <stdio.h>
int getANumberFromUser(){
    int b;
    printf("Enter a Number");
    scanf("%d",&b);
    return b;
}
void identifyTheNumberIsAboveTenAndBelowTwenty(int a){
    if (a>10){
        printf("Above Ten Is %d",a);
    }
    else {
        printf("Below Ten Is %d",a);
    }
    if (a<20){
        printf("Below Twenty Is %d",a);
    }
    else{
        printf("Above Twenty Is %d",a);
    }
}
void main(){
    int number= getANumberFromUser();
    identifyTheNumberIsAboveTenAndBelowTwenty(number);
    
}
