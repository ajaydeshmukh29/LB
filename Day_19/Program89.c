//////////////////////////////////////////////////////////////////////////////////////////
//
//  Write a program which accept one number and position from user and check whether bit at that position is ON or OFF. If bit is one return TRUE otherwise return FALSE
//
//  Input : 10  Position : 2
//  Output : TRUE
//////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
  UINT iAns = 0;
  UINT iMask = 0X00000001;

  iMask = iMask << (iPos - 1);

  iAns = iNo & iMask;

  if(iAns == iMask)
  {
    printf("Output : True");
  }
  else
  {
    printf("Output : False");
  }
}

int main()
{
  UINT iNum = 0;
  UINT iRet = FALSE;
  UINT iLocation = 0;

  printf("Enter Number : ");
  scanf("%d",&iNum);

  printf("Enter Position : ");
  scanf("%d",&iLocation);

  iRet = ChkBit(iNum,iLocation);
  
  return 0;
}