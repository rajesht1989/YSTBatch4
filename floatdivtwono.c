/Req: Get a two decimalnumber from user division them & print it on console
#include<studio.h>
float getATwoNumberFromUser()
{
 float n;
 printf("Enter a number is :");
 scanf("%f",&i);
 return i;
 }
 void main ()
 {
  float num1 = getATwoNumberFromUser();
  float num2 = getATwoNumberFromUser();
  float div = num1/num2;
  printf("division value is :",div);
}
