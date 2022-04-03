// Get a three number from user and print it on console
#include <stdio.h>
void main() {
    int number1 = getAFirstNumberFromUser();
    int number2 = getASecondNumberFromUser();
    int number3 = getAThirdNumberFromUser();
    printf("Number is %d \n",number1);
    printf("Number is %d \n",number2);
    printf("Number is %d",number3);
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
int getAThirdNumberFromUser(){
 int k;
 scanf("%d",&k);
 return k;
}


