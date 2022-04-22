/*Requirment : Get a number from user and draw the matrix number.
Algorithm :
 - Write a function to get a number from user using scanf.
 - Write a function to draw the matrix number.
 - Write a function of main to invoc to call get a number from user and matrix number.
   - Print the matrix number to the console.  */ 
 #include <stdio.h> 
 
 int getANumberFromUser() {
     int n;
     printf("Please enter a number ");
     scanf("%d", &n);
     return n;
     }
     
void drawMatrixNumber(int n) {
    for (int j = 0; j < n; j++) {
        for(int i = 0; i < n; i++){
            printf("%d \t",i,j);
        } 
        printf("\n");
    }
}

Void main(){
drawMatrixNumber(getANumberFromUser());
}
