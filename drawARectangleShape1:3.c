// get a number from user and draw the rectangle shape 1:3

/* algorithm 

step 1 : Write a function to get number from user using scanf statement
step 2 : write a function to draw a rectangle shape using looping statement
        - write a looping statement to rectangle column
        - write a looping statement to rectangle row
step 3 : write a main function to invoke the get number from user function and draw the rectangle shape function
*/
#include <stdio.h>
int getNumberFromUser(){
    int number;
    printf("Enter The Rectangle Shape: ");
    scanf("%d",&number);
    return number;
}
void drawARectangle(int a){
    for(int i=0;i<a;i++){
        for(int j=0;j<a*3;j++){
            printf("* ");
        }
        printf("*\n");
    }
}
void main (){
    drawARectangle(getNumberFromUser());
    
}
