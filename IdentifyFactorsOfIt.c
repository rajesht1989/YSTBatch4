// get a number from user and identify factors of it
#include <stdio.h>
int getANumberFromUser(){
    int i, number;
    printf("Please Enter a Number Bro ");
    scanf("%d", &number);
    return number;
}
int identifyFactors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
        printf("Factors of the given number is %d, \n", i);
    }
    }
}
void main(){
    identifyFactors(getANumberFromUser());
}
