////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application program which accept width & height of rectangle from user and Calculate its area. (Area = width * height)
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
  float Area = fWidth * fHeight;
  printf("Area is %f",Area);
}

int main()
{
  float fValue1 = 0.0, fValue2 = 0.0;
  double dRet = 0.0;

  printf("Enter Width : ");
  scanf("%f",&fValue1);

  printf("Enter height : ");
  scanf("%f",&fValue2);

  dRet = RectArea(fValue1, fValue2);

  return 0;
}