//Req: Get a two number from user Multiple them & print it on console
#include<studio.h>
int getATwoNumberFromUser()
{
 int n;
 printf("Enter a number is :");
 scanf("%d",&n);
 return n;
 }
 void main ()
 {
  int num1 = getATwoNumberFromUser();
  int num2 = getATwoNumberFromUser();
  int mul = num1*num2;
  printf("Multiplication value is :",mul);
}
