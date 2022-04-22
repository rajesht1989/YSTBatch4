//get a number from user and get those many numbers and addition them and print it on console 
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a iteration");
    scanf("%d", &number);
    return number;
}
int addTheNumberFromUser(int n){
    int addition = 0;
    for(int i = 0; i < n; i++){
    printf("Enter a number %d", i+1);
    addition += getANumberFromUser();
    }
    return addition;
}
int main (){
   int n = getANumberFromUser();
   int addition = addTheNumberFromUser(n);
   printf("Addition is %d,%d",n,addition);
   return 0;
}
