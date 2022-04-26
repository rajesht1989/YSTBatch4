/* Requirement : Get a number from user and identify that last number of it.
*/
#include <stdio.h>
int getANumberFromUser (){
    int n;
    printf ("Please enter a number : ");
    scanf ("%d",&n);
    return n;
}
void identifyTheLastNumber(int n) {
    
    int a = n % 10;
    printf("The last number is : %d",a);
}
void main(){

    identifyTheLastNumber(getANumberFromUser ());
}
