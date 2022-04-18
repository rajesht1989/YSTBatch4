// Write a program that gets a No from user and identify if the no positive or negative  
#include <stdio.h>

int main() {
    int Number = getANumberFromUser();
    identifyThePositiveOrNegativeNo (Number);
    return 0;
}

int getANumberFromUser() {
    int i;
    printf("Enter a Number");
    scanf("%d", &i);
    return i;
}

void identifyThePositiveOrNegativeNo(int a) {
    if (+a,-a) {
        printf("No Is Positive %d",a);
    } else {
        printf("No Is Negative %d",a);
    }
}
