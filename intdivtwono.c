//Req: Get a two number from user division them & print it on console
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
  int div = num1/num2;
  printf("Division value is :",div);
}
