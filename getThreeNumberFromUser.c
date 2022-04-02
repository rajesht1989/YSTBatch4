// Get a three number from user & print it on console
#include <stdio.h>
 int main (){
int number = getNumberFromUser();
    int num = getSecondNumberFromUser();
    int numb = getThirdNumberFromUser();
    printf(" Number is %d",number);
    printf("Second Numer is %d",num);
    printf("Third Number is %d",numb);
}
int getNumberFromUser (){
    int i;
    printf("Enter  Number Here : ");
    scanf("%d",&i);
    return i;
}
    int getSecondNumberFromUser (){
    int j;
    printf("Enter the Second Number Here : ");
    scanf("%d",&j);
    return j;
}
int getThirdNumberFromUser(){
    int k;
    printf("Enter the Third Number Here : ");
    scanf("%d",&k);
    return k;
}
