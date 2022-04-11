// Get a number from user and identify if number is equal to 19
#include<stdio.h>
int main()
{
    int i = getANumberFromUser();
    checkIfEqualOfNumber19(i);
    return(i);
}
int getANumberFromUser()
{
    int i;
    printf("Please enter the number");
    scanf("%d",&i);
    return i;
}
void checkIfEqualOfNumber19(int i)
{
    if(i>5){
        printf("Equal number");
    }
    else
{
    printf("Not  equal number");
}
}
