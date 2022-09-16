//Requirement: Get number & character from user and Online C compiler to mimic the tuple behaviour

#include <stdio.h>

int getNumberFormUser(){
    int n;
    printf("Enter the integer value :");
scanf("%d",&n);
    return n;
}

char getCharacterFormUser(){
    char c;
    printf("Enter the character value :");
    scanf("%c",&c);
    return c;
}
typedef struct{
    int a,b;
    char o;
}VanakkamdamapleJackcitylaIrunthu;

void main() {
    VanakkamdamapleJackcitylaIrunthu v;
    v.o=getCharacterFormUser();
    v.a=getNumberFormUser();
    v.b=getNumberFormUser();
    printf("%d%c%d",v.a,v.o,v.b);
}
