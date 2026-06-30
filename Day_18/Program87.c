////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which accept one number from user and Toggle 7th bit of that number. And Return modified number.
//
//  Input : 137
//  Output: 201
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNum)
{
  UINT iMask = 0X00000040;
  UINT iAns = 0;

  iAns = iNum ^ iMask;
}

int main()
{
  UINT iNo = 0 , iRet = 0;

  printf("Enter Number : ");
  scanf("%d",&iNo);
  
  iRet = ToggleBit(iNo);
  printf("Updated Number is : %d",iRet);

  return 0;
}