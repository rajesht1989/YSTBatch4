// Get a number from user & print it on console
#include<stdio.h>
void main()
{
    int number = getANumberFromUser();
    printf("Number is :%d",number);
}
int getANumberFromUser()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    return a;
}
