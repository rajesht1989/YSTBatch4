// Get a number from user and print the star it on console
#include <stdio.h>

int getANumberFromUser ()
{
 int n;
 printf ("Please enter a number :");
 scanf("%d",&n);
 return n;
}

void divBy11(int n)
{
    if(n%11 == 0){
  printf ("Divided by 11 is :%d",n);   
 }else{ 
     printf ("Not divided");
 }
 }

void main()
{
 divBy11(getANumberFromUser());
}
