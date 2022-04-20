// Get a number from user and identify that pre and post of increment and decrement 
#include <stdio.h>

int getANumberFromUser(){
    int n;
    printf("please enter a number : \n");
    scanf("%d",&n);
    return n;
}

void numberForPreIncrementAndPostIncrement(int n){
    printf ("Number for pre increment is : %d \n",++n);
printf ("Number for post increment is : %d \n",n++);
    }
 
 void numberForPreDecrementAndPostDecrement(int n){
    printf ("Number for pre decrement is : %d \n",--n);
printf ("Number for post decrement is : %d \n",n--);
}

void main() {
numberForPreIncrementAndPostIncrement(getANumberFromUser());
numberForPreDecrementAndPostDecrement(getANumberFromUser());
}
