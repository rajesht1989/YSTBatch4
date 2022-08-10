#include <stdio.h>
float getANumberFromUser(){
    float number;
    scanf("%f",&number);
    return number;
}
float identifyTheTriangleArea(int b , int h){
    return ( b * h /2 );
}
void main(){
   printf("Enter A Base ");
   float number1=getANumberFromUser();
   printf("Enter A height ");
   float number2=getANumberFromUser();
   float triangleArea=identifyTheTriangleArea(number1,number2);
   printf("Triangle Area is %f",triangleArea);
}
