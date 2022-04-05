// Get a four numbers from user and print it on console
#include <stdio.h>


int getANumberFromUser()
{
    int i;
    printf("Enter the number :");
    scanf("%d",&i);
    return i;
}

void main()
{
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int number3 = getANumberFromUser();
    int number4 = getANumberFromUser();
    printf("Number is : %d %d %d %d",number1,number2,number3,number4);
}
