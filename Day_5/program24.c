////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application program which accepts N from user and print all odd numbers up to N
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int N)
{
  int iCnt = 0;

  printf("Output: ");
  for(iCnt = 1; iCnt <= N; iCnt++)
  {
    if((iCnt % 2) != 0)
    {
      printf("%d\t",iCnt);
    }
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number N : ");
  scanf("%d",&iValue);

  OddDisplay(iValue);

  return 0;
}

// Time Complexity -> O(N)