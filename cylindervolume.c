// get a radious and height from identify the cylinder volume
#include <stdio.h>
float getNumberFromUser () {
    float number;

scanf("%f", & number);
return number;
}
float identifyTheCylinderVolume(float r,float h){
    return(3.14*r*r*h);
}
void main (){
    printf ("enter a number");
float num1 = getNumberFromUser();
printf ("enter a number");
float num2 = getNumberFromUser();
float CylinderVolume = identifyTheCylinderVolume(num1,num2);
printf ("theCylinderVolume%d", CylinderVolume);
//return float;
}
