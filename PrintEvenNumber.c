// get a number from user and print your name that many times on console 
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Even Number ");
    scanf("%d", &number);
    return number;
}
void printEvenNumber(int z){
    
    for(int i=0;i<z;i++){
        if(i%2 == 0)
        printf("%d",i);
    }
}
int main(){
    printEvenNumber(getANumberFromUser());
    return 0;
}
    
