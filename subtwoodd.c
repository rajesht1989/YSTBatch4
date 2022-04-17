// Get a two number from user and subtraction them identify if number is odd number 
#include<stdio.h>
int getANumberFromUser()
{
    int number;
    printf("Please enter the number :");
    scanf("%d",&number);
    return number;
}
int subTwoNumberFormUser(int n1,int n2)
{
    return(n1-n2);
}
void checkTheNumberIsOddNumber(int sub)
{
 if(sub%=0)
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
    int sub = subTwoNumberFormUser(n1,n2);
    checkTheNumberIsOddNumber(sub);
    return 0;
}
