// get a number from user identify its leap year or not 

#include <stdio.h>
int getYearFromUser() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   return year;
}
   void checkLeapYear(int a){
   if (a % 400 == 0) {
      printf("is a leap year.");
   }
   else if (a % 100 == 0) {
      printf("is not a leap year.");
   }
   else if (a % 4 == 0) {
   printf(" is a leap year.");
   }
   else {
   printf(" is not a leap year.");
   }
}

void main(){
    checkLeapYear(getYearFromUser());
}
