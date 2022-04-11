// Get a number from user and identify if number is less than 100
#include<stdio.h>
int main()
{
    int i = getANumberFromUser();
    checkIfLessrthan100(i);
    return(i);
}
int getANumberFromUser()
{
    int i;
    printf("Please enter the number");
    scanf("%d",&i);
    return i;
}
void checkIfLessthan100(int i)
{
    if(i<100){
        printf("Lessthan number");
    }
    else
{
    printf("Not lessthan number");
}
}
