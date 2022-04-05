// Get a number , decimal number and a character from a user & print it on console 
#include <stdio.h>
int getNumberFromUser (){
    int i;
    printf("Enter the Number : ");
    scanf("%d",&i);
    return i;
}
double getDecimalNumberFromUser(){
    double j;
    printf("Enter the Decimal Number :");
    scanf("%lf",&j);
    return j;
}
char getCharacterFromUser(){
    char k;
    printf("Enter the character :");
    scanf("%c",&k);
    return k;
}
void main (){
int number = getNumberFromUser();
double num = getDecimalNumberFromUser();
char character = getCharacterFromUser();
printf("Decimal Number is %lf \n",num);
printf("Number is %d \n",number);
printf("Character is %c \n",character);
}
