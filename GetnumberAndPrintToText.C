// get a number from user and print to text number it on console
#include<stdio.h>
int getNumber(){
    int number;
    printf("Enter the Number ");
    scanf("%d",&number);
    return number;
}
void printToTextNumber(int n){
    switch(n){
        case 1:
        printf("One");
        break;
        case 2:
        printf("Two");
        break;
        case 3:
        printf("Three");
        break;
        case 4:
        printf("four");
        break;
        case 5:
        printf("five");
        break;
        case 6:
        printf("six");
        break;
        case 7:
        printf("seven");
        break;
        case 8:
        printf("Eight");
        break;
        case 9:
        printf("nine");
        break;
        case 10:
        printf("Ten");
        break;
}
}

void main (){
  printToTextNumber(getNumber());
}
