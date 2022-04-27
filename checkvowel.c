/*Requirement :- Get a character from user and check the vowel or not.
Algorithm :-
- Write a function to get a character from user using scanf.
- Write a function to check the character is vowel or not using for loop and if condition.
- Write a main function to invoke the get character and check vowel functions.
  - Display the vowel or not it on console.
*/
#include <stdio.h>

char getACharacterFromUser(){
 char c;
printf ("Please enter a character : ");
scanf ("%c",&c);
return c;
}

void checkVowel(char c){
    char a,e,i,o,u;
        if(c == a || c == e || c == i || c == o || c == u ){
            printf ("The character is a vowel");
    }else{
        printf ("The character is a not vowel");
    }
}

void main (){
    checkVowel(getACharacterFromUser());
}
