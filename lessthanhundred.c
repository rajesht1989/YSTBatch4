// get the number from user and identify if the number is less than Hundred 
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
        printf("Thats perfect");
    }else{
        printf("Thats imperfect");
    }
}
