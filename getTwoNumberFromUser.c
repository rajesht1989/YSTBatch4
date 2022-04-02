// Get a two number from user & print it on console
#include <stdio.h>
 int main (){
int number = getNumberFromUser();
    printf("Number is %d",number);
    
    int num = getSecondNumberFromUser();
    printf("Second Numer is %d",num);
}
int getNumberFromUser (){
    int i;
    printf("Enter the Number Here : ");
    scanf("%d",&i);
    return i;
}
    int getSecondNumberFromUser (){
    int j;
    printf("Enter the Second Number Here : ");
    scanf("%d",&j);
    return j;
}
