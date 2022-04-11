// Get a two number from user and identify if number is largest
#include<stdio.h>
int main()
{
    int num1 = getANumberFromUser();
    int num2 = getANumberFromUser();
    checkTheLargestNumber(num1,num2);
    return 0;
}
int getANumberFromUser()
{
    int i;
    printf("Please enter the number");
    scanf("%d",&i);
    return i;
}
void checkTheLargestNumber(int num1,int num2)
{
    if(num1>num2){
        printf("First number is large");
    }
    else
{
    printf("Second number is large");
}
}
