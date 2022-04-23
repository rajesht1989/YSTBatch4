//Requirement : Get a number from user and get those many numbers, add them and print it console

/*
Algorithm:
write a function to get a number from user using scanf
write a function to get multiple numbers and add them using add opetator and for loop 
write main function invoke get number function and addition number function to Display the added number
*/

#include <stdio.h>
int getANumberFromUser() {
    int n;
    scanf("%d",&n);
    return n;
}

int additionOfNumbersFromUser(int n) {
    int addition = 0;
    for (int i = 0; i < n; i++ ) {
        printf("Enter %d number ", i + 1);
        int value = getANumberFromUser(); 
        addition += value;
    }
    return addition;
}

void main() {
        printf("Enter a number : ");
    int n = getANumberFromUser();
   int addition = additionOfNumbersFromUser(n);
   printf("Addition of %d number is %d", n, addition);
}
