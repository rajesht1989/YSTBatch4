//RequirementL get a number from user and get those many numbers, multiple them and print it console

/*
Algorithm:
write a function to get a number from user using scanf
write a function to get multiple numbers and add them using mul opetator and for loop 
write main function invoke get number function and multiple number function to Display the added number
*/

#include <stdio.h>
int getANumberFromUser() {
    int i;
    scanf("%d",&i);
    return i;
}

int multiplicationOfNumbersFromUser(int n) {
    int multiplication = 1;
    for (int i = 0; i < n; i++ ) {
        printf("Enter %d number ", i + 1);
        int value = getANumberFromUser(); 
        multiplication *= value;
    }
    return multiplication;
}

void main() {
        printf("Enter a number : ");
    int n = getANumberFromUser();
   int multiplication = multiplicationOfNumbersFromUser(n);
   printf("Multiplication of %d number is %d", n, multiplication);
}
