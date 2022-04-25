// write a program to get a number from user and draw a star triangle 
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number");
    scanf("%d", &number);
    return number;
}
void drawStarTriangle(int n){
    for(int i=0; i<n; i++){
    for(int j=0; j<2*i+1; j++){
        if(j<n+i){
        printf("*");
    }
        else{
        printf("\t");
        }
    }
        printf("\n");
    }
}
void main(){
    drawStarTriangle(getANumberFromUser());
}
