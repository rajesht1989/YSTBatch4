// get a age from user and check iif he is eligible for marriage 
#include <stdio.h>
int getAgeFromUser() {
    int age;
    printf("Enter your age ");
    scanf("%d", &age);
    return age;
}

void checkIfAllowdToMarriage(int age) {
    
    if (age > 40) {
        printf("boomer unclee");
    } else if (age >= 18) {
        printf("You are eligible to Marriage");
    } else {
        printf("Oraee asingamachu kumarru");
    }
}
int main() {
    int age = getAgeFromUser();
    checkIfAllowdToMarriage(age);
    return 0;
}
