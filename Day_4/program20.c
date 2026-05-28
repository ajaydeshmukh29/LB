//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which accept number form user and return difference between Summation of all its factors and non factors
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

int FactDiff(int iNo)
{

  int iCnt = 0;
  int iSummFact;
  int iSummNonFact;
  int iDifference = 0;

  for(iCnt = 0; iCnt <= iNo; iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
      iSummFact = iSummFact + iCnt;
      printf("%d",iSummFact);
    }
    else if ((iNo % iCnt) != 0)
    {
      iSummNonFact = iSummFact + iCnt;
      printf("Not a factor");
      printf("%d",iSummFact);

    }
  }

  return iDifference;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Input : ");
  scanf("%d",&iValue);

  iRet = FactDiff(iValue);

  printf("%d",iRet);

  return 0;
}