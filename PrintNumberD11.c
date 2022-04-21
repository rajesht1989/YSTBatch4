// get a number from user and identify if number is divisible by 11
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number ");
    scanf("%d", &number);
    return number;
}
void printNumber(int z){
    
    for(int i=1;i<z;i++){
        if(i%11 == 0)
        printf("%d",i);
    }
}
int main(){
    printNumber(getANumberFromUser());
    return 0;
}
    
