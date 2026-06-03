//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application progrm which accept range from user and display all numbers in between that range in reverse order.
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iStart, int iEnd)
{
  int iCnt = 0;

  if(iStart > iEnd)
  {
    printf("Invalid input");
  }

  for(iCnt = iEnd; iCnt >= iStart; iCnt--)
  {
    printf("%d\t", iCnt);
  }
}

int main()
{
  int iValue1, iValue2;

  printf("Enter Num1: ");
  scanf("%d",&iValue1);

  printf("Enter Num2: ");
  scanf("%d",&iValue2);

  Display(iValue1, iValue2);
  return 0;
}