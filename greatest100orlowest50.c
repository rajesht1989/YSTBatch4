// Get a number from user and identify if number is greater than 100 or lessthan 50
#include<stdio.h>
int main()
{
    int i = getANumberFromUser();
    checkIfGreaterthan100OrLessthan50OfNumber(i);
    return(i);
}
int getANumberFromUser()
{
    int i;
    printf("Please enter the number");
    scanf("%d",&i);
    return i;
}
void checkIfGreaterthan100OrLessthan50OfNumber(int i)
{
    if(i<50||i>100){
        printf("Greaterthan 100 or lessthan 50 of number");
    }
    else
{
    printf("Not a greaterthan 100 or lessthan 50 of number");
}
}
