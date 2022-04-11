// get a number from user and identify the number is greater than hundered and less than fifty
#include<stdio.h>
    int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}
void identifyTheNumber(int number){
    if ((number < 50) || (number > 100)){
        printf("The condition is ok");
    }
    else {
        printf("The condition is not ok"); 
    }
}
    int main (){
    int number = getANumberFromUser();
    identifyTheNumber(number);
    return number;
}
