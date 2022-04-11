// Get a side from user and identify that area and circumference of square
#include<stdio.h>
float main()
{
    float a = getASideFromUser();
    checkTheAreaOfSquare(a);
    checkTheCircumferenceOfSquare(a);
    return 0;
}
float getASideFromUser()
{
    float a;
    printf("Please enter the side");
    scanf("%f",&a);
    return a;
}
float checkTheAreaOfSquare(float a)
{
  printf("Area of square %f",a*a);
  return 0;
}
float checkTheCircumferenceOfSquare(float a)
{
  printf("Circumference of square %f",4*a);
  return 0;
}
