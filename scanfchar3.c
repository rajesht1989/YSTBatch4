// Get a  three character from user and print it on console
#include <stdio.h>
 char getACharacterFromUser(){
     char i;
     printf("Enter a Character");
     scanf("%c",&i);
     return i;
}
void main() {
    char chr1 = getACharacterFromUser();
    char chr2 = getACharacterFromUser();
    char chr3 = getACharacterFromUser();
    printf("character is %c \n",chr1);
    printf("character is %c \n",chr2);
    printf("character is %c",chr3);
}
