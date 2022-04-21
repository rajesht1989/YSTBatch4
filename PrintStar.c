// get a number from user print the star based on user input
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number ");
    scanf("%d", &number);
    return number;
}
void printNumber(int z){
    for(int i=0;i<z;i++){
        printf("*");
    }
}
int main(){
    printNumber(getANumberFromUser());
    return 0;
}
    
