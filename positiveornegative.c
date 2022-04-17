// Get a number from user and identify if number is equal to 19
#include<stdio.h>
int main()
{
    int n = getANumberFromUser();
    checkTheNumberIsPositiveOrNegative(n);
    return(n);
}
int getANumberFromUser()
{
    int n;
    printf("Please enter the number :");
    scanf("%d",&n);
    return n;
}
void checkTheNumberIsPositiveOrNegative(int n)
{
 if(n>0)
 {
  printf("The number is Positive");
}
    else if(n<0)
    {
     printf("The number is Negative");
}
    else
{
    printf("The number is neutral");
}
}
