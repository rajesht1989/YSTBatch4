//get a number from user and identify the Amstrong number
#include<stdio.h>
int getNumber(){
int number;
printf("Enter a number ");
scanf("%d",&number);
return number;
}
void identifyAmstrong(int n){
  int add = 0;
  for(int i = n; i > 0; i = i / 10){
    int reminder = i % 10;
    add += reminder*reminder*reminder;
  }
  if(add==n){
    printf("The given number is Amstrong");
  }else{
    printf("The given number is not Amstrong");
}
}
void main(){
  identifyAmstrong(getNumber());
}
