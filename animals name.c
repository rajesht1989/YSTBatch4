//Write a program to get animal's name alphabet
#include <stdio.h>
char getAnimalsFirstLetter(){
    char n ;
    printf("Please enter a animal first letter: ");
    scanf("%c",& n);
    return n;
}
void checkAnimalsName(char a){
    if( a == 'a' || a == 'A'){
        printf(" anil");
    } 
    else if(a == 'b' || a == 'B'){
        printf("Boomer anil ");
    }
    else if(a == 'c' || a  == 'C'){
        printf(" Chinna yaanai ");
    }
    else if(a  == 'd' || a == 'D'){
        printf("Donkey");
    }
    else if(a == 'e' || a == 'E'){
        printf("Eli");
    }
    else if(a == 'f' || a == 'F'){
        printf("Friend dog ");
    }
    else if(a == 'g' || a == 'G'){
        printf("Girl friends ");
    }
    else if(a == 'h' || a == 'H'){
        printf("Haina");
    }
    else if( a == 'i' || a == 'I'){
        printf("ILoveU");
    }
    else if( a == 'j' || a == 'J'){
        printf("Jangle ");
    }
    else if(a == 'k' || a == 'K'){
        printf("Kangaroo");
    }
    else if(a == 'l' || a == 'L'){
        printf("Lion");
    }
    else if(a == 'm' || a == 'M'){
        printf("Monkey");
    }
    else if(a == 'n' || a == 'N'){
        printf("Naanu");
    }
    else if(a == 'o' || a == 'O'){
        printf("oonai");
    }
    else if(a == 'p' || a == 'P'){
        printf("Panni");
    }
    else if(a == 'q' || a == 'Q'){
        printf("Questions");
    }
    else if(a == 'r' || a == 'R'){
        printf("Raana");
    }
    else if(a == 's' || a == 'S'){
        printf("Singam");
    }
    else if(a == 't' || a == 'T'){
        printf("Tiger");
    }
    else if(a == 'u' || a == 'U'){
        printf("Unni poochi");
    }
    else if(a == 'v' || a == 'V'){
        printf("Vilangu");
    }
    else if(a == 'w' || a == 'W'){
        printf("Wovval");
    }
    else if(a== 'x' || a == 'X'){
        printf("X man ");
    }
    else if(a == 'y' || a == 'Y'){
        printf("Yaazhi");
    }
    else if(a == 'z' || a == 'Z'){
        printf("Zebra");
    }
    else {
       printf("The name is above ability");
    }
}

void main(){
    
    checkAnimalsName(getAnimalsFirstLetter());
}
