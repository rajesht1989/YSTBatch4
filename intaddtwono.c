//Req: Get a two number from user add them & print it on console
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
  int add = numa+num2;
  printf("Addition value is :",add);
}
