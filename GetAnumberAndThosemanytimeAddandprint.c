//get a number from user and the number those many times and add them and print it on console
#include<stdio.h>
int getANumberFromUser(){
  int number;
  scanf("%d",&number);
  return number;
}
int addTheNumber(int n){
  int addition = 0;
  for(int i=0;i<n;i++){
  printf("Enter the number %d  ",i+1);
  addition += getANumberFromUser();
  }
  return addition;
  }
  int main(){
    printf("Enter a iteration ");
    int n = getANumberFromUser();
    int addition = addTheNumber(n);
    printf("Addition number is %d %d",n,addition);
    return 0;
    }
