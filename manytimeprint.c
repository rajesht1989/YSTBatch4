//Get a number from user and print your name that many times on console
#include <studio.h>

int getANumberFromUser ()
{
 int n;
 printf ("Please enter a number");
 Scanf("%d",n);
 return n;
}

int givenNumberOfTimesPrintAName(int n)
{
 for(i=0;i<n;i++)
 {
  printf ("KAMARAJ");
  }
 }

void main()
{
 int n = getANumberFromUser ();
 givenNumberOfTimesPrintAName (n);
}
