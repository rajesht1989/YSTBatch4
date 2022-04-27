// get a number from user and identify the last digit of it
# include<stdio.h>
int getNumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
    }
    void identifyLastDigit(int n){
     int c;
     c = n%10;
     printf("%d",c);
    }
  void main(){
    int number = getNumberFromUser();
    identifyLastDigit(number);
  }
