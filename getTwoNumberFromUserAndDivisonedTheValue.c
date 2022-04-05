getTwoNumberFromUser,DivisonedTheValueAndPrintItOnConsole
#include <stdio.h>

int getNumberFromUser(){
    int a;
    printf("Enter a Number : ");
    scanf("%d",&a);
    return a;
}
int getDivisonNumber(int a,int b){
return a/b; 
}
void main(){
    int number1 = getNumberFromUser();
    int number2 = getNumberFromUser();
    int divison = getDivisonNumber(number1,number2);
    printf(" Multiple Number %d", divison);
}
