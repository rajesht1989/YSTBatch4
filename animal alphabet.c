//Requirement:Write a program to get animal's name alphabet
#include <stdio.h>
char getAnimalNameInitial(){
    char character;
    printf("Please enter an animal initial : ");
    scanf("%c",& character);
    return character;
}
void checkAnAnimalNameInAlphabet(char n){
    if(n == 'a' || n == 'A'){
        printf("Alligator");
    } 
    else if(n == 'b' || n == 'B'){
        printf("Bear");
    }
    else if(n == 'c' || n == 'C'){
        printf("Chimpanzee");
    }
    else if(n == 'd' || n == 'D'){
        printf("Deer");
    }
    else if(n == 'e' || n == 'E'){
        printf("Elephant");
    }
    else if(n == 'f' || n == 'F'){
        printf("Fox");
    }
    else if(n == 'g' || n == 'G'){
        printf("Giraffe");
    }
    else if(n == 'h' || n == 'H'){
        printf("Hippopotamus");
    }
    else if(n == 'i' || n == 'I'){
        printf("Impala");
    }
    else if(n == 'j' || n == 'J'){
        printf("Jackal");
    }
    else if(n == 'k' || n == 'K'){
        printf("Kangaroo");
    }
    else if(n == 'l' || n == 'L'){
        printf("Lion");
    }
    else if(n == 'm' || n == 'M'){
        printf("Meerkat");
    }
    else if(n == 'n' || n == 'N'){
        printf("Nilgai");
    }
    else if(n == 'o' || n == 'O'){
        printf("Orangutan");
    }
    else if(n == 'p' || n == 'P'){
        printf("Porcupine");
    }
    else if(n == 'q' || n == 'Q'){
        printf("Quoll");
    }
    else if(n == 'r' || n == 'R'){
        printf("Rhinoceros");
    }
    else if(n == 's' || n == 'S'){
        printf("Squirrel");
    }
    else if(n == 't' || n == 'T'){
        printf("Tiger");
    }
    else if(n == 'u' || n == 'U'){
        printf("Urial");
    }
    else if(n == 'v' || n == 'V'){
        printf("Viper");
    }
    else if(n == 'w' || n == 'W'){
        printf("Wolf");
    }
    else if(n == 'x' || n == 'X'){
        printf("Xenurine");
    }
    else if(n == 'y' || n == 'Y'){
        printf("Yak");
    }
    else if(n == 'z' || n == 'Z'){
        printf("Zebra");
    }
    else {
        printf("The name is above ability");
    }
}

void main(){
    char n = getAnimalNameInitial();
    checkAnAnimalNameInAlphabet(n);
}
