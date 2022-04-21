/* Write a program get the number three from user and print the square star it on console
 - Write a square star function to the given number 
 - Write a main function to assign the number from user
    - To invoc the square star function
    - And result to print the square star on console*/
#include <stdio.h>

void printTheSquareStar(int n)
{
    for(int i = 0;i<n;i++){
  printf ("*\t\n");   
 for(int i = 0;i<n;i++){
     printf ("*\v");
 }
 }
 }

void main()
{
 int n = 3;
 printTheSquareStar(n);
}
