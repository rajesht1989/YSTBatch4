// get a number from user and check add or even number 
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number");
    scanf("%d", &number);
    return number;
}
int checkIfTheAddOrEvenNumber(int a){
    if(a% 2 == 0){
        printf("Enter a Even Number");
    }
    else{
        printf("Enter a Add Number");
    }
}
int main(){
    int i = getANumberFromUser();
    checkIfTheAddOrEvenNumber(i);
}
    
