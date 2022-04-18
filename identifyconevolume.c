// get a radius  and height of a cone and identify the volume
#include <stdio.h>
float getANumberFromUser() {
    float number;
    printf("Enter your number ");
    scanf("%f", &number);
    return number;
}

 float identifyTheConeVolume(float radius, float height) {
   return (3.14) * (radius * radius) * (height / 3);
}
float main() {
    float radius = getANumberFromUser();
    float height = getANumberFromUser();
    float volume = identifyTheConeVolume(radius,height);
    printf("volume of cone is %f",volume);
}
