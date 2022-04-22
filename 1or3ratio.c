/*Requirment : Get a number from user and draw star rectangle 1:2 ratio
Algorithm :
 - Write a function to get a number from user using scanf.
 - Write a function to draw the rectangle of 1:3 ratio.
 - Write a function of main to invoc to call get a number from user and star rectangle for 1or3 ratio.
   - Print the star rectangle to the console.  */ 
 #include <stdio.h> 
 
 int getANumberFromUser() {
     int i;
     printf("Please enter a number ");
     scanf("%d", &i);
     return i;
     }
     
void drawRectangleFor1Or3(int n) {
    for (int j = 0; j < n; j++) {
        for(int i = 0; i < n*3; i++){
            printf("* \t");
        } 
        printf("\n");
    }
}

Void main(){
drawRectangleFor1Or3(getANumberFromUser());
}
