//get a number from user and the number those many times and add them and print it on console
#include<stdio.h>
int getANumberFromUser(){
  int number;
  scanf("%d",&number);
  return number;
}
int productTheNumber(int n){
  int product = 1;
  for(int i=0;i<n;i++){
  printf("Enter the number %d  ",i+1);
  product *= getANumberFromUser();
  }
  return product;
  }
  int main(){
    printf("Enter a iteration ");
    int n = getANumberFromUser();
    int multiplication = productTheNumber(n);
    printf("Multiplication number is %d %d",n,multiplication);
    return 0;
    }
