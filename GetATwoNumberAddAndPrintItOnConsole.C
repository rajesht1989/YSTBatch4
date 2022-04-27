// get a number from user and add them and print it on console
# include<stdio.h>
int getNumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
    }
int addTheNumbers(int a,int b){
  return a+b;
  }
 void main (){
   int number1 = getNumberFromUser();
   int number2 = getNumberFromUser();
   int addition = addTheNumbers(number1,number2);
   printf("Addition is %d",addition);
   }
