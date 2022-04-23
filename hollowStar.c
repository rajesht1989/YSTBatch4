// get number from user and print hollow star 
#include <stdio.h>

int getNumberFromUser(){
int i;
printf("Enter a number ");
scanf("%d",&i);
return i;
}
void printStar(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
  if(i == 1 || i == n || j == 1 || j == n){
            printf("* \t");
        }
        else {
             printf("\t");
        }
        }
        printf("\n");
}
}
void main(){
    printStar(getNumberFromUser());
}
