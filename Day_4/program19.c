/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which accept number from user and return summation of all its non-factor
//
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int SumNonFact(int iNo)
{
  int iCnt = 0;
  int iSummation = 0;

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if((iNo % iCnt) != 0)
    {
      iSummation = iSummation + iCnt;
    }
  }
   return iSummation;
}
int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Input : ");
  scanf("%d",&iValue);

  iRet = SumNonFact(iValue);

  printf("Output: %d",iRet);

  return 0;
}