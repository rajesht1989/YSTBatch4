// Get a  one character from user and print it on console
#include <stdio.h>
void main() {
    char chr = getACharacterFromUser();
    printf("character is %c",chr);
}
 int getACharacterFromUser(){
     char i; 
     scanf("%c",&i);
     return i;
}
