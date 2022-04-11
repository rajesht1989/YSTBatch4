// Get a number from user and identify if number is divided by 5
#include<stdio.h>
int main()
{
    int i = getANumberFromUser();
    checkIfDividedByTheNumber(i);
    return(i);
}
int getANumberFromUser()
{
    int i;
    printf("Please enter the number");
    scanf("%d",&i);
    return i;
}
void checkIfDividedByTheNumber(int i)
{
    if(i%5==0){
        printf("Divided");
    }
    else
{
    printf("Not divided");
}
}
