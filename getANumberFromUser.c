// Get a number from user & print it on console
#include <stdio.h>
void main (){
int number = getNumberFromUser();
    printf("Number is %d",number);
}
int getNumberFromUser (){
    int i;
    scanf("%d",&i);
    return i;
}
