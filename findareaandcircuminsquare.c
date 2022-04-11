// get a one side of square from user and identify the area and circumference of square
#include<stdio.h>
int getANumberFromUser(){
    int number;
    printf("Enter a number");
    scanf("%d",&number);
    return number;
}
int findAreaAndPrint(int a){
    return (a * a);
}
int findCircumferenceAndPrint(int a){
     return (4 * (a));
}
int main (){
    int number = getANumberFromUser();
    int area = findAreaAndPrint(number);
    int circumference = findCircumferenceAndPrint(number);
    printf("Area is %d \n",area);
    printf("Circumference %d",circumference);
}
