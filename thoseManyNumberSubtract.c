//RequirementL get a number from user and get those many numbers, subtract them and print it console

/*
Algorithm:
write a function to get a number from user using scanf
write a function to get multiple numbers and subtract them using multiplication opetator and for loop 
write main function invoke get number function and multiple number function to Display the multiple number
*/

#include <stdio.h>
int getANumberFromUser() {
    int i;
    scanf("%d",&i);
    return i;
}

int subtractNumber(int i) {
    int subtraction = 100;
    for (int a = 0; a < i; a++ ) {
     printf("Enter number %d: ",a + 1 );
     subtraction -= getANumberFromUser(); 
    }
    return subtraction;
}

void main() {
      printf("Enter the number ");
    int number= getANumberFromUser();
     
   int add = subtractNumber(number);
   printf(" Subtraction is %d " , add );
}
