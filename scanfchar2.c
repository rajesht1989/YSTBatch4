// Get a  two character from user and print it on console
#include <stdio.h>
 char getACharacterFromUser(){
     char i; 
     printf("Enter a Number ");
     scanf("%c",&i);
     return i;
}
void main() {
    char chr1 = getACharacterFromUser();
    char chr2 = getACharacterFromUser();
    printf("character is %c \n",chr1);
    printf("character is %c",chr2);
}



