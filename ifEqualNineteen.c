// two number from user and identify if the number is equal nineteen
#include <stdio.h>
int main() {
    int number=getNum();
    checkEqualNum (number);
    return 0;
}
int getNum(){
    int i;
    printf("Enter the Number : ");
    scanf("%d",&i);
    return i;
}
void checkEqualNum(int num){
if(num==19){
printf("This Number Is Equal nineteen ");
} else {
printf("This Number Is not nineteen ");
}
}
