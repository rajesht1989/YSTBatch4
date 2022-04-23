// get number from user identity if prime number and print of below prime number
#include <stdio.h>

int getNumberFromUser(){
    int i;
    printf(" Enter number ");
    scanf("%d",&i);
    return i;
}
int checkPrime(int n){
    for(int i=2; i <= n/2; i++){
    if(n%i==0){
   return 0;
    }
    }
    return n;
}
void printPrime(int a){
    for (int j=1;j<=a;j++){
        int n = checkPrime(j);
        if (n!=0){
            printf("%d ",n);
        }
    }
}

void main(){
   int a = getNumberFromUser();
   printPrime(a);
    
}
