// get number from user and identify if Armstrong number


#include <stdio.h>

int getNumberFromUser(){
    int a;
    printf("Enter the digits ");
    scanf("%d",&a);
    return a;
}
int amstrongNumber(int n) {
    int  a , b = 0;

    if (n != 0) {
       a = n % 10;
       b += a * a * a ;
       n /= 10;
    }

    if (b == n)
        printf(" Armstrong number.");
    else
        printf(" not  Armstrong number.");

   return n;
}
void main (){
   int a = amstrongNumber(getNumberFromUser());
   
}

