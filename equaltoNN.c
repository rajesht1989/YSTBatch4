// get the number from user and identify if the number is equal to nineteen
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
    if(number == 19){
        printf("Thats perfect");
    }else if (number < 19){
        printf("Thats imperfect");
    }
    else if (number > 19){
        printf("Thats imperfect");
    }
}
