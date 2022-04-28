//Requirement : Get a number from user and check if it is divisible by 5 and check if divisible by 6 and check if divisible by 7 print it console.

/*
Algorithm:
  - Write a function to get a number from user using scanf.
  - Write a function to get added number is check divided by 5 check divided by 6 and check if divisible by 7 using modulo operator.
  - Write main function invoke get number function and divided function to Display the added number divided by5,6 and 7.
*/

#include <stdio.h>
int getANumberFromUser() {
    int n;
    printf("Please enter a number : ");
    scanf("%d",&n);
    return n;
}
 
void numberIsDivisibleBy5And6And7(int n)
{
  if (n % 5 == 0 && n % 6 == 0 && n % 7 == 0){
      printf ("number is divided by 5,6 and 7");
  }else{
      printf ("not divided by 5,6 and 7");
}
}

void main() {
   numberIsDivisibleBy5And6And7(getANumberFromUser ());
}
