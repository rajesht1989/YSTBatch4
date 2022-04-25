// get a no from user and draw hallow square star

#include <stdio.h>
int getANumberFromUser(){
    int i;
    printf("Enter a number ");
    scanf("%d",&i);
    return i;
}
void printHallowSquareStar(int a){
    for(int i = 0;i <=a ;i++){
     for (int j = 0;j <=a;j++){
 if(i == 0||i == a||j == 0||j == a){
            printf("*\t");
        }
        else {
            printf(" \t");
        }   
            
        }
    
      printf("\n");
    }
}
 int main(){
    printHallowSquareStar(getANumberFromUser());
return 0;
}
