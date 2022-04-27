// get a number from user and identify the factorial 
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number Bro ");
    scanf("%d", &number);
    return number;
}
void identifyTheFactorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        int f=f*i;
    }  
    printf("Factorial is : %d",f);
}
void main(){
    identifyTheFactorial(getANumberFromUser());
}
