//Req: Get a two number from user remainder of division them & print it on console
#include<studio.h>
int getATwoNumberFromUser()
{
 int n;
 printf("Please enter a number :");
 scanf("%d",&n);
 return n;
 }
int divTwoNumbers(int num1,int num2)
{
 return num1/num2;
}
int divRemainder(int num1,int num2)
{
 return num1%num2;
}
 void main ()
 {
  int num1 = getATwoNumberFromUser();
  int num2 = getATwoNumberFromUser();
  int div = divTwoNumbers(num1/num2);
  int rmd = divRemainder (num1%num2);
  printf("Division value : %d Remainder is : %d",div,rmd);
}
