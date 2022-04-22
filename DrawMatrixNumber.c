// get a number from user and draw matrix number 
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number ");
    scanf("%d", &number);
    return number;
}
void drawMatrix(int n){
    for(int i = 0; i<n; i++){
       for(int j = 0; j<n; j++){
         printf("%d,%d \t",i,j);
    }
    printf("\n");
    }
}
void main(){
 drawMatrix(getANumberFromUser());
 return 0;
}
