//getTwoNumberFromUserDivisonAndRemindTheValueAndPrintItOnConsole
#include <stdio.h>
int getTwoNumberFromUser(){
    int a;
    printf("Enter the Number :");
    scanf("%d",&a);
    return a;
}
int addDivisonNumber(int a,int b){
    return a/b;
}
int addRemindNumber(int a,int b){
    return a%b;
}
void main(){
    int num1 = getTwoNumberFromUser();
    int num2 = getTwoNumberFromUser();
    int division = addDivisonNumber(num1,num2);
    int remind = addRemindNumber(num1,num2);
    printf("Devision Number %d",division);
    printf("Remind Number %d",remind);

