// write a program to get a Numbers from user and identify the addition of each digits
#include <stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a Number");
    scanf("%d", &number);
    return number;
}
void additionOfEachDigits(int number){
    int add = 0;
    for(int i=number;i>0;i/=10){
        add+=i%10;
        printf("%d\n",add);
    }
}
int main(){
    additionOfEachDigits(getANumberFromUser());
    return 0;
}
