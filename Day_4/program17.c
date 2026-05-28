//////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application program which accept number from user and display its factors in decreasing order
//
////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int MultFact(int iNo)
{
  int iCnt = 0;
  int iFactor = 1;

   printf("Input : %d\n",iNo);
   
  for(iCnt = 1; iCnt < iNo; iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
      iFactor = iFactor * iCnt;
     
      printf("(%d) ",iFactor);
    } 
  }
  return iFactor;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number : ");
  scanf("%d",&iValue);

  iRet = MultFact(iValue);

  printf("%d",iRet);

  return 0;
}

// Time Complexity -> N