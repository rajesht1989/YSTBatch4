//Requirement:Write a program to get girls name a to z
#include <stdio.h>
char getGirlInitial(){
    char girlInitial;
    printf("Enter a Name ");
    scanf("%c",&girlInitial);
    return girlInitial;
}
void getAGirlNameInAlphabet(char c){
    if(c == 'a' || c == 'A'){
        printf("Anjalai");
    } 
    else if(c == 'b' || c == 'B'){
        printf("Brindha");
    }
     else if(c == 'c' || c == 'C'){
        printf("Chithra");
     }
     else if(c == 'd' || c == 'D'){
        printf("Deekshana");
     }
     else if(c == 'e' || c == 'E'){
        printf("Elakiya");
     }
     else if(c == 'f' || c == 'F'){
        printf("Fathima");
     }
     else if(c == 'g' || c == 'G'){
        printf("Geetha");
    }
    else if(c == 'h' || c == 'H'){
        printf("Harshini");
    }
    else if(c == 'i' || c == 'I'){
        printf("Isha");
    }
    else if(c == 'j' || c == 'J'){
        printf("jivitha");
    }
    else if(c == 'k' || c == 'K'){
        printf("Kalaivani");
    }  
    else if(c == 'l' || c == 'L'){
        printf("lavanya");
    }
    else if(c == 'm' || c == 'M'){
        printf("Marilyn Monroe");
    }
     else if(c == 'n' || c == 'N'){
        printf("Naina");
    }
    else if(c == 'o' || c == 'O'){
        printf("Oviya");
    }
    else if(c == 'p' || c == 'P'){
        printf("Priya");
    }
    else if(c == 'q' || c == 'Q'){
        printf("Qwinn");
    }
    else if(c == 'r' || c == 'R'){
          printf("Rafia");
   }
    else if(c == 's' || c == 'S'){
          printf("Sanjana");
    }
    else if(c == 't' || c == 'T'){
        printf("Tanya");
    }
    else if(c == 'u' || c == 'U'){
        printf("Usha");
    }
    else if(c == 'v' || c == 'V'){
        printf("Varsha");
    }
    else if(c == 'w' || c == 'W'){
        printf("Warmika");
    }
    else if(c == 'x' || c == 'X'){
        printf("Xella");
    }
    else if(c == 'y' || c == 'Y'){
        printf("Yasika");
    }
    else if(c == 'z' || c == 'Z'){
        printf("Ziva");
    }
              
}
void main(){
    char initial = getGirlInitial();
    getAGirlNameInAlphabet(initial);
}
