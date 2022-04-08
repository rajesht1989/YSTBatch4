// write a program that uses of arithmetic opertors
#include<stdio.h>
void main(){
    int a =6, b = 12;
    addAndPrint(a,b);
    subtractAndPrint(a,b);
    productAndPrint(a,b);
    quotientAndPrint(a,b);
    reminderAndPrint(a,b);
}
void addAndPrint(int a, int b){
    printf("Addition is %d \n",a + b);
}
void subtractAndPrint(int a,int b){
   printf("Subtraction is is %d \n",a - b); 
}
void productAndPrint(int a,int b){
    printf("Multiplication is is %d \n",a * b);
}
void quotientAndPrint(int a,int b){
    printf("Quotient is is %d \n",a / b);
}
void reminderAndPrint(int a,int b){
    printf("Reminder is is %d",a % b); 
}
    
