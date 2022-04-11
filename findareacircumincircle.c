// get a radius from user and identify the area and circumference of circle
 #include<stdio.h>
  
 float getARadiusFromUser(){
     float radius;
     printf("Enter a number ");
     scanf("%f",&radius);
     return radius;
 }
 float areaOfCircle(float radius){
       return (3.14* radius * radius);
 }
 float CircumferenceOfCircle(float radius){
      return (2*(3.14)* radius * radius);
 }
 void main (){
     float number = getARadiusFromUser();
     float area = areaOfCircle(number);
     float Circumference = CircumferenceOfCircle(number);
     printf("Area is %f \n",area);
     printf("Circumference is %f",Circumference);
 }
