// Get a number from user and identify it palintrom or not
#include <stdio.h>
int getANumberFromUser (){
    int n;
    printf ("Please enter a number : ");
    scanf ("%d",&n);
    return n;
}

void identifyIfPalindrom(int n){
    int a = 0;
    for(int i = n; i > n ; i /= 10){
        a = a * 10 + i % 10;
    if(n == a){
        printf ("Palindrom");
    }else{
        printf ("Not palindrom");
    }
    }  
}

void main() {
    identifyIfPalindrom(getANumberFromUser ());
}
