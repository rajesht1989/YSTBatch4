// Get a two number from user and print it on console
#include <stdio.h>
void main() {
    int number1 = getAFirstNumberFromUser();
    int number2 = getASecondNumberFromUser();
    printf("Number is %d \n",number1);
    printf("Number is %d",number2);
}
 int getAFirstNumberFromUser(){
     int i; 
     scanf("%d",&i);
     return i;
}
int getASecondNumberFromUser(){
    int j;
    scanf("%d",&j);
    return j;
}


