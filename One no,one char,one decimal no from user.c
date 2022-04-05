// get one number,one character and one float from user and using format specifier print it on console
#include<stdio.h>

    int getANumberFromUser(){
        int i;
        printf("Enter A Number");
        scanf("%d",&i);
        return i;
}
char getALetterFromUser(){
    char j;
    printf("Enter A Letter");
    scanf("%c",&j);
    return j;
}
float getADecimalNumberFromUser(){
    float k;
    printf("Enter A No");
    scanf("%f",&k);
    return k;
}
void main(){
    int number = getANumberFromUser();
    float no = getADecimalNumberFromUser();
    char letter = getALetterFromUser();
    printf("Number is %d,\n",number);
    printf("letter is %c,\n",letter);
    printf("no is %f,\n",);
}
