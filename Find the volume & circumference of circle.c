//// get a radius from user and identify the area and circumference of circle
 #include<stdio.h>
  
 float getARadiusFromUser(){
     float radius;
     printf("Enter a number");
     scanf("%f",&radius);
     return radius;
 }
 float areaOfCircle(float radius){
     return (( 1.4)*(radius))
    ;
 }
 float CircumferenceOfCircle(float radius){
     return ((2)*(1.4)*(radius * radius)) ;
 }
 void main (){
     float number = getARadiusFromUser();
     float areaOfCircle(float radius);
     float CircumferenceOfCircle(float radius);
     printf("volume is %f \n",number);
     printf("Circumference is %f",number);
    
    
 }
