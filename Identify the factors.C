// get a number from user and identify the factors and print it on console
#include<stdio.h>
int getNumber(){
    int number;
    printf("Enter the Number ");
    scanf("%d",&number);
    return number;
}
void identifyTheFactors(int n){
    int factors = 1;
    for(int i = 2; i<=n/2;i++){
      if(n%i==0){
      printf("The factor is %d\n",i);
      factors = n%i;
    }
    
  }
}
void main(){
  identifyTheFactors(getNumber());
}
