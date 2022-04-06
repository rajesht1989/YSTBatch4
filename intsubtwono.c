//Req: Get a two number from user sub them & print it on console
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
  int sub = num1-num2;
  printf("subtraction value is :",sub);
}
