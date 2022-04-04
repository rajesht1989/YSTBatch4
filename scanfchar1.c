// Get a  one character from user and print it on console
#include <stdio.h>
 char getACharacterFromUser(){
     char i; 
     printf("enter a character ");
     scanf("%c",&i);
     return i;
}
void main() {
    char chr = getACharacterFromUser();
    printf("character is %c",chr);
}

