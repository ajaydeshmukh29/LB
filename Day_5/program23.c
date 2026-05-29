///////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application program which accept number from user and print its numbers line
//
///////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
  int iCnt = 0;

  printf("Output : ");

  for(iCnt = -iNo; iCnt <= iNo; iCnt++)
  {
    printf("%d\t",iCnt);
  }
}

int main()
{
  int iValue = 0;

  printf("Input : ");
  scanf("%d",&iValue);

  Display(iValue);
  return 0;
}

// Time Complexity is -> O(N)
