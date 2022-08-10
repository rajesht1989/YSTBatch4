//get A No From User And Print a star and Print it on console
#include <stdio.h>
int getANumberFromUser(){
    int i;
    printf("Enter a number");
    scanf("%d",&i);
    return i;
}
void printStar(int a){
    for(int i=0;i<a;i++);
    printf("*");
}
int main() {
   printStar(getANumberFromUser());
   return 0;
}
