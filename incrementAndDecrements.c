#include <stdio.h>
int getNumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}
void preIncrement(int a){
     printf("value is %d\n",++a);
    
}
void postIncrement(int b){
     printf("value is %d\n",b++);
    
}
void preDecrement(int c){
     printf("value is %d\n",--c);
    
}
void postDecrement(int d){
     printf("value is %d",d--);
    
}
void main() {
  preIncrement(getNumberFromUser());
  postIncrement(getNumberFromUser());
  preDecrement(getNumberFromUser());
  postDecrement(getNumberFromUser());
}
