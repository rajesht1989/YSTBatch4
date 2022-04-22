// get a number from user and draw star rectangle width size 1:2
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number ");
    scanf("%d", &number);
    return number;
}
void drawStarRectangle(int n){
    for(int i = 0;i<n;i++){
       for(int j = 0; j<n*2; j++){
         printf("*\t");
    }
    printf("\n");
    }
}
void main(){
 drawStarRectangle(getANumberFromUser());
 return 0;
}
