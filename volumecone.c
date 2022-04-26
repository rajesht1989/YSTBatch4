// Get a radius and height from user and identify if volume of cone
#include<stdio.h>
int getARadiusFromUser()
{
    int r;
    printf("Please enter the radius : ");
    scanf("%d",&r);
    return r;
}
   
int getAHeightFromUser()
{
    int h;
    printf("Please enter the height : ");
    scanf("%d",&h);
    return h;
}
float identifyTheVolumeOfCone(float r, float h)
{
  printf("Volume of cone %f",3.14*r*r*h/3);
  return 0;
}

void main()
{
    float r = getARadiusFromUser();
    float h = getAHeightFromUser();
    identifyTheVolumeOfCone(r,h);
}
