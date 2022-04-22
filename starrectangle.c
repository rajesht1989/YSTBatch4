/*Requirment : Get a number from user and draw star rectangle 1:2 ratio
Algorithm :
 - Write a function to get a number from user using scanf.
 - Write a function to draw the rectangle of 1:2 ratio.
 - Write a function of main to invoc to call get a number from user and star rectangle for 1or2 ratio.
   - Print the star rectangle to the console.  */ 
 #include <stdio.h> 
 
 int getNumberOfWindows() {
     int i;
     printf("Please enter a number ");
     scanf("%d", &i);
     return i;
     }
     
void drawRectangleFor1Or2(int n) {
    for (int j = 0; j < n; j++) {
        for(int i = 0; i < n*2; i++){
            printf("* \t");
        } 
        printf("\n");
    }
}


void main() {
    drawRectangleFor1Or2(getNumberOfWindows());
}
