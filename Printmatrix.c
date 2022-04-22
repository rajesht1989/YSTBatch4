//get a number from user and draw star rectangular 1 : 2 ratio
#include<stdio.h>
int getANumberFromUser(){
  int number;
  printf("Enter a number ");
  scanf("%d",&number);
  return number;
}
void printmatrix(int n){
  for(int a=0;a<n;a++){
  for(int i=0;i<n;i++){
    printf("%d,%d ",i,a);
  }
  printf("\n");
 }
 }
void main(){
  printmatrix(getANumberFromUser());
}
