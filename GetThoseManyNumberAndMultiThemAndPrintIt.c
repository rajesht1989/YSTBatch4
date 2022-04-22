//get a number from user and get those many numbers and multiplication them and print it on console 
#include <stdio.h>
int getANumberFromUser(){
    int number;
    //printf("Enter a iteration ");
    scanf("%d", &number);
    return number;
}
int multiTheNumberFromUser(int n){
    int multiplication= 1;
    for(int i = 0; i < n; i++){
    printf("Enter a number %d", i+1);
   multiplication *= getANumberFromUser();
    }
    return multiplication;
}
int main (){
   int n = getANumberFromUser();
   int multiplication = multiTheNumberFromUser(n);
   printf("multiplication is %d %d ",n,multiplication);
   return 0;
}
    
