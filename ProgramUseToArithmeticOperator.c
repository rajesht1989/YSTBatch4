//Requirement:write a program to use an arithmetic operator
#include <stdio.h>
int main(){
    int b=19,p=5;
    int addition,subtraction,multiplication,division,modulus;
    addition = b+p;
    subtraction = b-p;
    multiplication = b*p;
    division = b/p;
    modulus = b%p;
    printf("Addition of two numbers b,p is %d/n",addition);
    printf("Subtraction of two numbers b,p is %d/n",subtraction);
    printf("Multiplication of two numbers b,p is %d/n",multiplication);
    printf("Division of two numbers b,p is %d/n",division);
    printf("Modulus of two numbers b,p is %d/n",modulus);
}
