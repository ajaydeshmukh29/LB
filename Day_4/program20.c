//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which accept number form user and return difference between Summation of all its factors and non factors
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactDiff(int iNo)
{

  int iCnt = 0;
  int iSummFact = 0;
  int iSummNonFact = 0;
  int iDifference = 0;

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
      iSummFact = iSummFact + iCnt;
    }
    else
    {
      iSummNonFact = iSummNonFact + iCnt;
    }
  }

  iDifference = iSummFact - iSummNonFact;

  return iDifference;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Input : ");
  scanf("%d",&iValue);

  iRet = FactDiff(iValue);

  printf("Output : %d",iRet);

  return 0;
}