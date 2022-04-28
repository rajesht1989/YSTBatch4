// Get a number from user and print it on letter on below twnty
#include <stdio.h>
int getANumberFromUser (){
    int n;
    printf ("Please enter a number  : ");
    scanf("%d",&n);
    return n;
}
void checkNumberPrintLetter(int n){
    switch (n){
    case 1 :
    printf ("One");
    break;
     case 2 :
    printf ("Two");
    break;
 case 3 :
    printf ("Three");
    break;
 case 4 :
    printf ("Four");
    break;
 case 5 :
    printf ("five");
    break;
    case 6 :
    printf ("Six");
    break;       
case 7 :
    printf ("Sevan");
    break;
case 8 :
    printf ("Eight");
    break;
case 9 :
    printf ("Nine");
    break;
case 10 :
    printf ("Ten");
    break;
case 11 :
    printf ("leaven");
    break;
case 12 :
    printf ("twel");
    break;
case 13 :
    printf ("Thrteen");
    break;
case 14 :
    printf ("fourteen");
    break;
case 15 :
    printf ("Fifteen");
    break;
case 16 :
    printf ("Sixteen");
    break;
case 17 :
    printf ("Seventeen");
    break;
case 18 :
    printf ("Eighteen");
    break;
case 19 :
    printf ("Nineteen");
    break;
case 20 :
    printf ("Twnty");
    break;
default :
    printf (" The above number is not a ebility");
    break;
    }
}
void main() {
     checkNumberPrintLetter(getANumberFromUser ());
}
