// get a number from user and identify the positive number or negative number
#include<stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    return number;
}
void identifyTheNumbers(int number){
    if(number>0){
        printf("postive number");
    } else {
        printf("negative number");
    }
    
}
int main(){
    int number = getANumberFromUser();
    identifyTheNumbers( number);
    return number;
}
