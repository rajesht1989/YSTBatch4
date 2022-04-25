// write a program to get a number from user to draw hollow square 
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number");
    scanf("%d", &number);
    return number;
}
void drawHollowSquare(int n){
    for(int i=0; i<=n; i++){
    for(int j=0; j<=n; j++){
      if(i == 0 || i == n || j == 0 || j == n){
            printf("*\t");
  }
   else{
       printf("\t");
   }
    }
       printf("\n");
    }
}
void main(){
   drawHollowSquare(getANumberFromUser());
}
