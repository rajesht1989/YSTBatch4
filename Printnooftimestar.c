// Get a number from user and print the star it on console
#include <stdio.h>

int getANumberFromUser ()
{
 int n;
 printf ("Please enter a number :");
 scanf("%d",&n);
 return n;
}

int printStar(int n)
{
 for(int i=0;i<n;i++)
 {
  printf ("* \n");       
 }
 }

void main()
{
 printStar (getANumberFromUser());
}
