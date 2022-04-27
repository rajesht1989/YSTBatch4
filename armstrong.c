//Requirement : Get a number from user and identify if it is Armstrong number print it console

/*
Algorithm:
  - Write a function to get a number from user using scanf
  - Write a function to identify if Armstrong number them using add opetator and for loop.
  - Write main function invoke get number and armstrong number functions
    - Display the armstrong number on console.
*/

#include <stdio.h>
int getANumberFromUser() {
    int n;
    printf ("Please enter a number : ");
    scanf("%d",&n);
    return n;
}

int identifyIfArmstrongNumber(int n) {
    int add = 0;
    for (int i = n; i > n; i = i / 10 ) {
        int a = i % 10; 
        add += a * a * a;
    }
  if(add == n){
      printf ("number is armstrong");
  }else{
      printf ("not an armstrong number");
}
}
void main(){
   identifyIfArmstrongNumber(getANumberFromUser ());
}
