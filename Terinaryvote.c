// Write a progaram to get age numbers from user and identify if one is eligible for vote using if else and terinary operator 

#include <stdio.h>
int getAgeFromUser(){
    int age;
    printf("Please enter your age :");
    scanf("%d",&age);
    return age;
}
void checkAgeIsEligibleForVote(int age) {
    if (age >= 18) {
        printf("voter is eligible for Vote");
    } else {
       printf ("Children to play");
    }
}


void checkAgeIsEligibleForVote1(int age) {
    age >= 18 ? printf("voter is eligible for Vote") : printf ("Children to play");
}

void main() {
    int age = getAgeFromUser();
    checkAgeIsEligibleForVote(age);
    checkAgeIsEligibleForVote1(age);
}
