// Get a length and width and identify the area and circumference of rectangular
#include<stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a number ");
    scanf("%d",&number);
    return number;
}
int areaOfRectangular(int l,int b){
    return l * b;
}
int circumferenceOfRectangular(int l,int b){
    return 2* ( l + b);
}
int main (){
    int number1 = getANumberFromUser();
    int number2 = getANumberFromUser();
    int area = areaOfRectangular(number1,number2);
    int circumference = circumferenceOfRectangular(number1,number2);
    printf("Area is %d \n",area);
    printf("Circumference is %d", circumference);
}
