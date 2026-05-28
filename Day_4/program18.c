/////////////////////////////////////////////////////////////////////////////////////////
//
//   Application which accepts a number from user and displays all its non-factors
//
/////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void iNoFactor(int iNo)
{
  int iCnt = 0;

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if((iNo % iCnt) != 0)
    {
      printf("%d\t",iCnt);
    }
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number : ");
  scanf("%d",&iValue);

  iNoFactor(iValue);
  return 0;
}

//Time Complexity -> N 