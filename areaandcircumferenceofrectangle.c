// Get a length and breadth from user and identify that area and circumference of rectangle
#include<stdio.h>
float main()
{
    float l = getALengthFromUser();
    float b = getABreadthFromUser();
    checkTheAreaOfRectangle(l,b);
    checkTheCircumferenceOfCircle(l,b);
    return 0;
}
float getALengthFromUser()
{
    float l;
    printf("Please enter the length");
    scanf("%f",&l);
    return l;
}
float getABreadthFromUser()
{
    float b;
    printf("Please enter the breadth");
    scanf("%f",&b);
    return b;
}
float checkTheAreaOfRectangle(float l, float b)
{
  printf("Area of rectangle %f",l*b);
  return 0;
}
float checkTheCircumferenceOfRectangle(float l, float b)
{
  printf("Circumference of rectangle %f",2*(l+b));
  return 0;
}
