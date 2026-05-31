////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application program which accept temprature in Fahrenheit and convert it into celsius.  (1 celsius = (Fahrenheit -32) * (5/9))
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhtoCs(float fTemp)
{
  double celsius ;

  printf("%lf\n",fTemp);

  celsius = (fTemp - 32) * 0.555555;
  

  return celsius;
}

int main()
{
  float fValue = 0.0;
  double dRet = 0.0;

  printf("Enter temperature in Fahrenheit : ");
  scanf("%f",&fValue);

  dRet = FhtoCs(fValue);

  printf("Temperature in Celsius is : %lf",dRet);
  return 0;
}