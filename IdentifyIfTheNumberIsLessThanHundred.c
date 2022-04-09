// Requirement: get the number from user and identify if the number is less than hundred 
#include<stdio.h>
int main(){
    int number = getANumberFromUser();
    checkIfTheNumber(number);
    return 0;
}
    int getANumberFromUser(){
    int number;
    printf("Enter a Number ");
    scanf("%d",&number);
    return number;
    }
    void checkIfTheNumber(int number){
    if(number<100){
        printf("That is Right");
    }else{
        printf("Go and study selvaraj tuition");
    }
}
