//Requirement:Write a program to get a number from user and print to text
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number ");
    scanf("%d",&number);
    return number;
}
void getANumberPrintToText(int number){
    if(number == 1){
        printf("One");
    } 
    else if(number == 2){
        printf("Two");
    }
     else if(number == 3){
        printf("Three");
     }
     else if(number == 4){
        printf("Four");
     }
     else if(number == 5){
        printf("Five");
     }
     else if(number == 6){
        printf("Six");
     }
     else if(number == 7){
        printf("Seven");
    }
    else if(number == 8){
        printf("Eight");
    }
    else if(number == 9){
        printf("Nine");
    }
    else if(number == 10){
        printf("Ten");
    }
    else if(number == 11){
        printf("Eleven");
    }  
    else if(number == 12){
        printf("Twelve");
    }
    else if(number == 13){
        printf("Thirteen");
    }
     else if(number == 14){
        printf("Fourteen");
    }
    else if(number == 15){
        printf("Fifteen");
    }
    else if(number == 16){
        printf("Sixteen");
    }
    else if(number == 17){
        printf("Seventeen");
    }
    else if(number == 18){
          printf("Eighteen");
   }
    else if(number == 19){
          printf("Nineteen");
    }
    else if(number == 20){
        printf("Twenty");
    }
   }
int main(){
    int number = getANumberFromUser();
    getANumberPrintToText(number);
    return number;
}
