//Requirement : Get a number from user and get those many numbers, add them and print it console

/*
Algorithm:
  - Write a function to get a number from user using scanf
  - Write a function to get multiple numbers and add them using add opetator and for loop 
  - Write a function to get added number is check divided by 5 using modulo operator
  - Write main function invoke get number function and addition number function and divided function to Display the added number divided by 5
*/

#include <stdio.h>
int getANumberFromUser() {
    int n;
    scanf("%d",&n);
    return n;
}

int additionOfGivenNumber(int n) {
    int addition = 0;
    for (int i = 0; i < n; i++ ) {
        printf("Enter %d number ", i + 1);
        int value = getANumberFromUser(); 
        addition += value;
    }
    return addition;
}
 
void additionIsDivisibleBy5(int addition)
{
  if(addition % 5 == 0){
      printf ("number is divided by 5");
  }  else{
      printf ("not divided by 5");
}

void main() {
        printf("Enter a number : ");
    int n = getANumberFromUser();
   int addition = (n);
   additionIsDivisibleBy5(addition);
   printf("Addition of %d number is %d", n, addition);
}
