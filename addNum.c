//get number from user and print star L shale on console 
#include <stdio.h>
// get number from user and check divided by 11.
#include <stdio.h>
int getNumberFromUser(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    return number;
}
int addTwoNumber(int a,int b){
    return a+b;
}
int main() {
  int number1 = getNumberFromUser();
  int number2 = getNumberFromUser();
  int add = addTwoNumber(number1,number2);
  printf("Add Number Is %d",add);
    return 0;
}
