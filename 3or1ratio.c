/*Requirment : Get a number from user and draw star rectangle 1:2 ratio
Algorithm :
 - Write a function to get a number from user using scanf.
 - Write a function to draw the rectangle of 3:1 ratio.
 - Write a function of main to invoc to call get a number from user and star rectangle for 3or1 ratio.
   - Print the star rectangle to the console.  */ 
 #include <stdio.h> 
 
 int getANumberFromUser() {
     int i;
     printf("Please enter a number ");
     scanf("%d", &i);
     return i;
     }
     
void drawRectangleFor3Or1(int n) {
    for (int j = 0; j < n*3; j++) {
        for(int i = 0; i < n; i++){
            printf("* \t");
        } 
        printf("\n");
    }
}

Void main(){
drawRectangleFor3Or1(getANumberFromUser());
}
