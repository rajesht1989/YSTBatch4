//Get a number from user and identify and add of the prime numbers below it
#include <stdio.h>
int getNumberFromUser()
{
    int n;
    printf ("Enter a Number ");
    scanf("%d",&n);
    return n;
}
int identifyAndAddOfThePrimeNumber(int n){
 for(int i=2;i<=n/2;i++){
 if(n%i==0){
 return 0;
}
}
 return n;
}

void identifyAndAddOfThePrimeNumbers(int a){ 
    int add=0;
    for(int i=1;i<=a;i++){
        int n = identifyAndAddOfThePrimeNumber(i);
           if(n != 0){
              add = add+i;
        }
    } printf ("Add of prime number is : %d",add);
}
void main() {
    int a = getNumberFromUser();
    identifyAndAddOfThePrimeNumbers(a);
}
