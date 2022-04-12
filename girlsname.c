//Requirement:Write a program to get girls name a to z
#include <stdio.h>
char getGirlNameInitial(){
    char girNamelInitial;
    printf("Enter a name initial ");
    scanf("%c",&girlNameInitial);
    return girlNameInitial;
}
void checkAGirlNameInAlphabet(char n){
    if(n == 'a' || n == 'A'){
        printf("Ambika");
    } 
    else if(n == 'b' || n == 'B'){
        printf("Bala");
    }
    else if(n == 'c' || n == 'C'){
        printf("Chidra");
    }
    else if(n == 'd' || n == 'D'){
        printf("Dhivya");
    }
    else if(n == 'e' || n == 'E'){
        printf("Elakkiya");
    }
    else if(n == 'f' || n == 'F'){
        printf("Fathima");
    }
    else if(n == 'g' || n == 'G'){
        printf("Geetha");
    }
    else if(n == 'h' || n == 'H'){
        printf("Hema");
    }
    else if(n == 'i' || n == 'I'){
        printf("Iniya");
    }
    else if(n == 'j' || n == 'J'){
        printf("Jayanthi");
    }
    else if(n == 'k' || n == 'K'){
        printf("Karthika");
    }
    else if(n == 'l' || n == 'L'){
        printf("Lavanya");
    }
    else if(n == 'm' || n == 'M'){
        printf("Monisha");
    }
    else if(n == 'n' || n == 'N'){
        printf("Naganya");
    }
    else if(n == 'o' || n == 'O'){
        printf("Oviya");
    }
    else if(n == 'p' || n == 'P'){
        printf("Priya");
    }
    else if(n == 'q' || n == 'Q'){
        printf("Queen");
    }
    else if(n == 'r' || n == 'R'){
        printf("Raji");
    }
    else if(n == 's' || n == 'S'){
        printf("Sakthiya");
    }
    else if(n == 't' || n == 'T'){
        printf("Thamana");
    }
    else if(n == 'u' || n == 'U'){
        printf("Uma");
    }
    else if(n == 'v' || n == 'V'){
        printf("Vani");
    }
    else if(n == 'w' || n == 'W'){
        printf("Wila");
    }
    else if(n == 'x' || n == 'X'){
        printf("Xaina");
    }
    else if(n == 'y' || n == 'Y'){
        printf("Yashotha");
    }
    else if(n == 'z' || n == 'Z'){
        printf("Zaara");
    }
    else {
        printf("The name is above ability");

void main(){
    char initial = getGirlNameInitial();
    checkAGirlNameInAlphabet(initial);
}
