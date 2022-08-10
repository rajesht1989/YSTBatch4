// Get A Number From User and Make Sure It's Divisible By 5,6 & 7
#include <stdio.h>
int getANumberFromUser(){
    int i;
    printf("Enter A Number ");
    scanf("%d",&i);
    return i;
}
void checkDivisibleNo(int n){
    if( n % 5 == 0){
     printf("Divisible By 5 ");
    }
    else if (n % 6 == 0){
        printf("Divisible By 6");
    }
    else{
        printf("Divisible By 7");
        
    }
}

void main() {
   
   checkDivisibleNo(getANumberFromUser());
    
}
