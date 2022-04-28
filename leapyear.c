/*Requirement :- Write a program to check given year is leap year or not
 - Write a function to get a year from user using scanf.
 - Write a function to check leap year using if condition.
 - Write a main function to invoke the get number and check leap year functions.
   - Display the given year leap or not on console
*/
#include <stdio.h>

int getAYearFromUser(){
    int n;
    printf ("Please enter the year : ");
    scanf("%d",&n);
    return n;
}

void checkLeapYear(int n){
    if(n % 4 == 0){
        printf ("The year is a leap");
    }else{
        printf ("The year is a not leap");
    }
}

void main() {
   checkLeapYear(getAYearFromUser());
}
