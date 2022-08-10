// get A no from user and identify the first digit 
#include <stdio.h>
int getANumberFromUser(){
    int i;
    printf("Enter A Number ");
    scanf("%d",&i);
    return i;
}
void identifyFirstDigit(int a){
    for(int i = a;i > 10;i/=10){
        a=a/10 ;
        
    }
    printf("%d",a);
}

int main() {
    
  identifyFirstDigit(getANumberFromUser());
    
    return 0;
}
