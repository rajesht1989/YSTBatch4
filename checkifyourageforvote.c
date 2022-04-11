// Write a program that gets a age from user and identify if they can vote or not 
#include <stdio.h>

int main() {
    int age = getAgeFromUser();
    checkIfAllowdToVote(age);
    return 0;
}

int getAgeFromUser() {
    int age;
    printf("Enter your age ");
    scanf("%d", &age);
    return age;
}

void checkIfAllowdToVote(int age) {
    if (age >= 18) {
        printf("You are eligible to vote");
    } else {
        printf("You are not eligible to vote");
    }
}
