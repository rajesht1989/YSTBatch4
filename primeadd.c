/*Requirement : Get a number from user and identify that the prime addition
Algorithm :
  - Write a function to get a number from user using scanf.
  - Write a function to identify that prime numbers using loop and if condition.
  - Write a function to print the prime numbers to below using loop and if condition.
  - Write a main function to invoke number to get a number from user and print the prime numbers below to using addition operation to the functions.
      - print the prime numbers addition is on console.     */
#include <stdio.h>
int getANumberFromUser()
{
    int n;
    printf ("Please enter a number : ");
    scanf("%d",&n);
    return n;
}
int identifyThePrimeNumber(int n)
{
    for(int i = 2; i <= n / 2 ; i ++){
        if(n % i == 0){
            return 0;
        }
    }
    return n;
}

void printThePrimeNumbers(int a){ 
    int add = 0;
    for(int i = 1; i <= a; i ++){
        int n = identifyThePrimeNumber(i);
           if(n != 0){
              add = add + i;
        }
    } printf ("Addition of prime number is : %d",add);
}
void main() {
    int a = getANumberFromUser();
    printThePrimeNumbers(a);
}
