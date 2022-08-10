// write a program to find the volume of cylinder get no from user and print it on console
#include <stdio.h>

float getNoFromUser(){
    float i ;
    scanf("%f",&i);
    return i;
}

float findCylinderVolume(float radius ,float height){
    //printf("%f %f", radius, height);
    return (3.14 * radius * radius * height);
}
 int main (){
       printf("Enter the radius ");
    float radius = getNoFromUser();
           printf("Enter the height ");
    float height = getNoFromUser();
    float volume = findCylinderVolume( radius , height);
  printf("answer is %f",volume);

   return 0;
}

