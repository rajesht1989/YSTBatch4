// get two number from user and identify if greater than five 
#include <stdio.h>
int main() {
    int number=getNum();
    checkGreaterNum(number);
    return 0;
}
int getNum(){
    int i;
    printf("Enter the Number : ");
    scanf("%d",&i);
    return i;
}
void checkGreaterNum(int num){
if(num>5){
printf("This Number Is Greater than Five");
} else {
printf("This Number is Lesser than Five");
}
}
