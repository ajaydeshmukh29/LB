/////////////////////////////////////////////////////////////////////
//
//  Program which accept N and Print first 5 multiplies of N 
//
/////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
  int iCnt = 0;
  int iMul = 1;
  

  // let iNo = 4

  for(iCnt = iNo; iCnt <= iNo*5; iCnt= iCnt+iNo)
  {
    iMul = iCnt * 1;
    printf("%d\t",iMul);  // 4  8 12  16  20
  }
}

int main()
{
  int iValue = 0;
  printf("Enter number N : ");
  scanf("%d",&iValue);

  MultipleDisplay(iValue);

  return 0;
}

// Time Complexity is -> O(5)