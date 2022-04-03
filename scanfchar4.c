// Get a  four character from user and print it on console
#include <stdio.h>
void main() {
    char chr1 = getAFirstCharacterFromUser();
    char chr2 = getASecondCharacterFromUser();
    char chr3 = getAThirdCharacterFromUser();
    char chr4 = getAFourthCharacterFromUser();
    printf("character is %c \n",chr1);
    printf("character is %c \n",chr2);
    printf("character is %c \n",chr3);
    printf("character is %c",chr4);
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
int getAThirdCharacterFromUser(){
    char k;
    scanf("%c",&k);
    return k;
}
int getAFourthCharacterFromUser(){
    char l;
    scanf("%c",&l);
    return l;
}    
