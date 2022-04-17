// Get a three number from user and reminder them identify if number is odd number 
#include<stdio.h>
int getANumberFromUser()
{
    int number;
    printf("Please enter the number :");
    scanf("%d",&number);
    return number;
}
int reminderThreeNumberFormUser(int n1,int n2,int n3)
{
    return(n1/n2/n3);
}
void checkTheNumberIsOddNumber(int rmd)
{
 if(rmd%=0)
 {
  printf("The number is Odd number");
}
    else
{
    printf("The number is Even number");
}
}
int main ()
{
    int n1 = getANumberFromUser();
    int n2 = getANumberFromUser();
    int n3 = getANumberFromUser();
    int rmd = reminderThreeNumberFormUser(n1,n2,n3);
    checkTheNumberIsOddNumber(rmd);
    return 0;
}
