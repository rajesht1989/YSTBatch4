//get number of windows in class and check if ok to sit there and listen to the mokkai that all members put
#include <stdio.h> 
  int getNumberOfWindows() {
     int i;
     printf("Please enter the windows count in the class ");
     scanf("%d", &i);
     return i;
     }
     
void checkIfClassIsEligible(int n) {
    if (n > 3) {
        printf("Thank you");
    } else if (n > 2) {
              printf("Nice");
    } else if (n > 1) {
              printf("Fine");
    } else if (n > 0) {
              printf("better");
    } else {
              printf("bad time");
    }
}

void main() {
    checkIfClassIsEligible(getNumberOfWindows());
}
