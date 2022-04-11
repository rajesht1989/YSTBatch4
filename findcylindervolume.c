// get a radius and height from user and identify the cylinder volume
#include<stdio.h>
float getANumberFromUser(){
  float number;
  printf("Enter a number ");
  scanf("%f",&number);
  return number;
}

float identifyTheVolume(float radius,float height){
  return ((3.14)*(radius * radius)* height);
}

void main(){
 float radius = getANumberFromUser();
 float height = getANumberFromUser();
 float volume =  identifyTheVolume(radius,height);
 printf("Volume of Cylinder is %f", volume);
 }
