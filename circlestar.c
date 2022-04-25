/*
 Requirment : Get a number from user and draw the circle star on console.
 
 - Write a function to get a number from user using scanf.
 - Write a function to draw the circle using for loop and if condition.
 - Write a main function to invoke the get number and circle functions.
    - Display the print the star of circle .
*/
#include <stdio.h> 
 
 int getANumberFromUser() {
     int n;
     printf("Please enter a number ");
     scanf("%d", &n);
     return n;
     }
     
void drawCircleStar(int n) {
    for (int j = n; j <= n; j--) {
        for(int i = 1; i <= n; i++){
            if (j <= i-j/2){
            printf("* \t");
            }
        }
        printf("\n");
    }
}

void main(){
drawCircleStar(getANumberFromUser());
}
