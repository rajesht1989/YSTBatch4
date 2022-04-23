// Requirement : Get a number from user and identify that halo square star on console
/* 
  - Write a function to get a number from user using scanf.
  - Write a function to draw halo square star to given number using for loop and if condition.
  - Write a main function to invoke get number and draw halo square star.
      - Display the halo square star on console
*/ 
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
            if(i == 0 || i == n-1 || j == 0 || j == n-1 ){
            printf("* \t");
        } else{
            printf ("\t");
        }
    }
    printf ("\n");
}
}

void main(){
drawMatrixNumber(getANumberFromUser());
}
