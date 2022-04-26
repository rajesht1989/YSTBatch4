//get a no from user and add each digit

#include <stdio.h>
int getANumberFromUser(){
    int i;
    printf("Enter a Number ");
    scanf("%d",&i);
    return i;
}
void addEachDigit(int n){
    int a = 0;
    for(int i = n;i > 0;i/=10){
        a=a+i%10;
      
    }
     printf("%d",a);
}

int main() {
   addEachDigit(getANumberFromUser ());
   return 0;
}
