 //get number from user and identify Fibonacci numbers
#include <stdio.h>
int getNumberFromUser(){
    int a;
    printf("Enter the Number ");
    scanf("%d",&a);
    return a;
}
int getFibonacci(int n){
    int a=0;
    int b=1;
    for(int i=3;i<=n;i++){
        int add = a + b;
  printf("%d \t ",add);
    a=b;
    b=add;
    add=a+b;
}
}

void main(){
    int number = getNumberFromUser();
    getFibonacci(number);
}
