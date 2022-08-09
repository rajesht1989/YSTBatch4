#include <stdio.h>
float getANumberFromUser(){
    float number;
    scanf("%f", &number);
    return number;
}
float identifyTheCylinderVolume(int r, int h ){
    return (3.14*r*r*h);
}
void main(){
    printf("Enter a Radius");
    float number1=getANumberFromUser();
    printf("Enter a Height");
    float number2=getANumberFromUser();
    float cylindervolume=identifyTheCylinderVolume(number1,number2);
    printf("Cylindervolume is %f",cylindervolume);
}
