// get two number from user and identify if less than hundred 
#include <stdio.h>
int main() {
    int number=getNum();
    checkLessThanHundred (number);
    return 0;
}
int getNum(){
    int i;
    printf("Enter the Number : ");
    scanf("%d",&i);
    return i;
}
void checkLessThanHundred(int num){
if(num<100){
printf("This Number Is Less than hundred ");
} else {
printf("This Number is Greater than Hundred ");
}
}
