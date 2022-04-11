//get 3 numbers from user and identify the color
#include<stdio.h>
    int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}

void identifyTheColorAndPrintItOnConsole(int r, int g, int b) {
    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) {
         printf("Invalid Color code entered");
        return;
    }
    
    
    if (r == 0 && g == 0 && b == 0) {
        printf("Color is Black");
        return;
    }
    
    if (r == 255 && g == 255 && b == 255) {
        printf("Color is White");
        return;
    }
    
    if (r == 255 && g == 0 && b == 0) {
        printf("Color is Red");
        return;
    }
    
    
    
}


int main () {
    int rValue = getANumberFromUser();
    int gValue = getANumberFromUser();
    int bValue = getANumberFromUser();
   identifyTheColorAndPrintItOnConsole(rValue, gValue, bValue);
    
   return 0;
}
