// Get a radius and height from user and identify that area and circumference of cylinder
#include<stdio.h>
float main()
{
    float l = getARadiusFromUser();
    float b = getAHeightFromUser();
    checkTheVolumeOfCylinder(r,h);
    checkTheCircumferenceOfCylinder(r,h);
    return 0;
}
float getARadiusFromUser()
{
    float r;
    printf("Please enter the radius");
    scanf("%f",&r);
    return r;
}
float getAHeightFromUser()
{
    float h;
    printf("Please enter the height");
    scanf("%f",&h);
    return h;
}
float checkTheVolumeOfCylinder(float r, float h)
{
  printf("Volume of cylinder %f",3.14*(r*r)*h);
  return 0;
}
