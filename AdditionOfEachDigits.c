// write a program to get a number from user and identify if addition of each figut
#include <stdio.h>
int getANumberFromUser (){
    int n ;
    printf ("Enter a number");
    scanf ("%d", & n) ;
    return n;
}
void addDigits(int n){
    int add = 0;
    for (int i=n; i>0; i/=10) {
    add+= i%10;
}
printf ("%d \n", add);
}
int main () {
 addDigits(getANumberFromUser());
return 0;
}  
