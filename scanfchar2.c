// Get a  two character from user and print it on console
#include <stdio.h>
void main() {
    char chr1 = getAFirstCharacterFromUser();
    char chr2 = getASecondCharacterFromUser();
    printf("character is %c \n",chr1);
    printf("character is %c",chr2);
}
 int getAFirstCharacterFromUser(){
     char i; 
     scanf("%c",&i);
     return i;
}
int getASecondCharacterFromUser(){
    char j;
    scanf("%c",&j);
    return j;
}

