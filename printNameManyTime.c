// get number from user and print your name that many time on console 
#include <stdio.h>
int getNumberFromUser(){
    int number;
    printf("enter  the number: ");
    scanf("%d",&number);
    return number;
}
int printName(int a){
     for(a;a>0;a--){
   printf("Narasingam \n");
     }
}
int main() {
  int number = getNumberFromUser();
  printNamr(number);
    return 0;
}
