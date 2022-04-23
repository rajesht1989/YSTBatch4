// Requirement : Get a number from user and identify that fibonacci number on console.

#include <stdio.h>

int getANumberFromUser() {
    int n;
    printf("Please enter a number : ");
    scanf("%d",&n);
    return n;
}

void fibonacciSeries(int range){
   int a=0, b=1, c;
   while (a<=range)
   {
     printf("%d\t", a);
     c = a+b;
     a = b;
     b = c;
   }
}
int main(){
int range;

   printf("Enter range: ");
   scanf("%d", &range);

   printf("The fibonacci series is: \n");

   fibonacciSeries(range);

   return 0;}
