/*
 Requirment : Get a number from user and draw the equalator triangle star on console.
 
 - Write a function to get a number from user using scanf.
 - Write a function to draw the equalator triangle using for loop and if condition.
 - Write a main function to invoke the get number and equalator triangle functions.
    - Display the print the star of equalator triangle.
*/
#include <stdio.h> 
 
 int getANumberFromUser() {
     int n;
     printf("Please enter a number ");
     scanf("%d", &n);
     return n;
     }
     
void drawEqualatorTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1 - i; j++){
        printf(" ");
}
            for(int k = 0; k <= i * 2 ; k++ ){
            printf("*");
            }
        printf("\n");
    }
}

void main(){
drawEqualatorTriangle(getANumberFromUser());
}
