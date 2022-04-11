// Get a number from user and identify if number is greater than 5
#include<stdio.h>
float main()
{
    float r = getARadiusFromUser();
    checkTheAreaOfCircle(r);
    checkTheCircumferenceOfCircle();
    return 0;
}
int getARadiusFromUser()
{
    int r;
    printf("Please enter the radius");
    scanf("%d",&r);
    return r;
}
float checkTheAreaOfCircle(float r)
{
  printf("Area of circle %f",3.14*r*r);
  return 0;
}
float checkTheCircumferenceOfCircle()
{
  printf("Circumference of circle %f",2*3.14*r);
  return 0;
}
