/*Requirements : Get a number from user and identify that factorial it on print console.
Algorithm :-
  - Write a function to get a number from user using scanf.
  - Write a function to identify the factorial number using for loop and if condition.
  - Write a main function to invoke the get number and identify factorial number functions.
    - Display the factorial of number
*/
#include <stdio.h>

int getANumberFromUser (){
    int n;
    printf ("Please enter a number : ");
    scanf ("%d",&n);
    return n;
}

void identifyTheFactorialNumber(int a){
    int fact = 1;
        for (int i = 1; i <= a; i++){
            fact *= i;
        }
        printf ("Factorial is : %d",fact); 
}

void main (){
    identifyTheFactorialNumber(getANumberFromUser());
}
