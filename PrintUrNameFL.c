// get a number from user and print your name that many times on console 
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number ");
    scanf("%d", &number);
    return number;
}
void printName(int z){
    for(int i=0;i<z;i++){
        printf("Yaash");
    }
}
int main(){
    printName(getANumberFromUser());
    return 358;
}
    
