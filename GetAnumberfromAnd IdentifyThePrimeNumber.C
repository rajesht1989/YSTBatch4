// get a number from user and identify the number if it ia prime 
#include<stdio.h>
int getANumberFromuser(){
  int number;
  printf("Enter a number ");
  scanf("%d",&number);
  return number;
}
int isPrimeNumber(int j){
  for(int i=2; i <=j/2; i++){
    if(j % i == 0){
      return 0;
    }
  }
      return 1;
}
 void primeNumbersList(int v){
   for(int i=v;i>0;i--){
     int k = isPrimeNumber(i);
     if (k != 0){
       printf("%d\n",i);
     }
   }
 }
 void main(){
   int j = getANumberFromuser();
   primeNumbersList(j);
 }
