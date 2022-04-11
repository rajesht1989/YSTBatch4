// Get a number from user and identify if number is greater than 5
#include<stdio.h>
int main()
{
    int i = getANumberFromUser();
    checkIfGreaterthanOfNumber(i);
    return(i);
}
int getANumberFromUser()
{
    int i;
    printf("Please enter the number");
    scanf("%d",&i);
    return i;
}
void checkIfGreaterthanOfNumber(int i)
{
    if(i>5){
        printf("Greaterthan number");
    }
    else
{
    printf("Not a greaterthan number");
}
}
