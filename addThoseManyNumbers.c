//RequirementL get a number from user and get those many numbers, add them and print it console

/*
Algorithm:
write a function to get a number from user using scanf
write a function to get multiple numbers and add them using add opetator and for loop 
write main function invoke get number function and multiple number function to Display the added number
*/

#include <stdio.h>
int getANumberFromUser() {
    int i;
    scanf("%d",&i);
    return i;
}

int addNumber(int i) {
    int addition = 0;
    for (int a = 0; a < i; a++ ) {
        printf("Enter number %d: ",a + 1 );
        
        addition +=getANumberFromUser(); 
    }
    return addition;
}

void main() {
      printf("Enter the number ");
    int number= getANumberFromUser();
     
   int add = addNumber(number);
   printf("Addtion is %d " , add );
}
