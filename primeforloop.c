/*Requirement : Get a number from user and identify that the prime numbers below it

Algorithm :
  - Write a function to get a number from user using scanf.
  - Write a function to identify that prime numbers using loop and if condition.
  - Write a function to print the prime numbers to below using loop and if condition.
  - Write a main function to invoke number to get a number from user and print the prime numbers below functions.
      - print the prime numbers below it on console.     */
#include <stdio.h>
int getANumberFromUser()
{
    int n;
    printf ("Please enter a number");
    scanf("%d",&n);
    return n;
}
int identifyThePrimeNumber(int n)
{
    for(int i = 0; i < n/2; i++){
        if(n%i ==0){
            return 0;
        }
    }
    return n;
}

void printThePrimeNumbersBelow(int n){
    for(int i = 0; i < n; i++){
        int prime = identifyThePrimeNumber(i);
           if(prime != 0){
              printf ("%d",prime);
        }
    }
}
void main() {
    int n= getANumberFromUser();
    printThePrimeNumbersBelow(n);
    
    return 0;
}
