// get a number from user and identify the addition of each digit
# include<stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
    }
    int identifyAddEachDigit(int n){
     int sum = 0;
     for(int i=n;i>0;i=i/10){
       sum = sum + i%10;
     }
     printf("Addition is %d",sum);
     
    }
  void main(){
   
    identifyAddEachDigit(getANumberFromUser());
  }
