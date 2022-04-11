// get a two number from user and identify the largest number
#include<stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}
int identifyTheLargestNumber(int a,int b){
    if(a>b){
       printf(" A  is largest  %d",a);
       return 0;
    } else {
        printf("B is largest  %d",b);
        return 0;
    }
}
int main(){
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
     identifyTheLargestNumber(number1,number2);
    return 0;
}
