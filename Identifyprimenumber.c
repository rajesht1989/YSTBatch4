//get a number from user and below twenty and identify the primary number
#include<stdio.h>
    int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}

void identifyIfPrimeNumber(int num){
     if (num > 20) {
        printf("Number is above my ability");
        return;
    } 
    if (num == 1 || num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num ==13 || num == 17 || num == 19) {
        printf("The number is prime");
    } else {
       printf("The number is not prime"); 
    }
}

int main () {
    int number = getANumberFromUser();
   
    identifyIfPrimeNumber(number);
    
   return number;
}
