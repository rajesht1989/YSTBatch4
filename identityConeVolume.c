// get a radius  and height of a cone and identify the volume
#include <stdio.h>
int getANumberFromUser() {
    int number;
    scanf("%d", &number);
    return number;
}
 int identifyConeVolume(int radius, int height) {
   return (3.14) * (radius * radius) * (height / 3);
}
void main() {
   printf("Enter the radius ");

    int radius = getANumberFromUser();
   printf("Enter the height ");

    int height = getANumberFromUser();
    int volume = identifyConeVolume(radius,height);
    printf("volume of cone  %d ",volume);
}
