#include <stdio.h>
float getARadiusFromUser(){
    float r;
    printf("Enter A Number");
    scanf("%f", &r);
    return r;
}
float findTheCircumfranceOfCircle(int r){
    return (2 * 3.14 * r);
}
void main(){
   float radius=getARadiusFromUser();
   float circumfranceOfCircle=findTheCircumfranceOfCircle(radius);
    printf("Circumfranceofcircle is %f",circumfranceOfCircle);
}
