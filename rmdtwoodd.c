// Get a two number from user and reminder them identify if number is odd number 
#include<stdio.h>
int getANumberFromUser()
{
    int number;
    printf("Please enter the number :");
    scanf("%d",&number);
    return number;
}
int rmdTwoNumberFormUser(int n1,int n2)
{
    return(n1%n2);
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
    int rmd = rmdTwoNumberFormUser(n1,n2);
    checkTheNumberIsOddNumber(rmd);
    return 0;
}
