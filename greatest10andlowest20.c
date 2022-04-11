// Get a number from user and identify if number is greater than 10 and lessthan 20
#include<stdio.h>
int main()
{
    int i = getANumberFromUser();
    checkIfGreaterthan10AndLessthan20OfNumber(i);
    return(i);
}
int getANumberFromUser()
{
    int i;
    printf("Please enter the number");
    scanf("%d",&i);
    return i;
}
void checkIfGreaterthan10AndLessthan20OfNumber(int i)
{
    if(i<20&&i>10){
        printf("Greaterthan 10 and lessthan 20 of number");
    }
    else
{
    printf("Not a greaterthan 10 and lessthan 20 of number");
}
}
