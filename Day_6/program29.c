///////////////////////////////////////////////////////////////////////////////
//
//  Program which accept number from user and display its table
//
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
  int iCnt = 0;
  int iTable = 1;

  printf("Output : ");

  for(iCnt = 1; iCnt <= 10; iCnt++)
  {
    iTable = iNo * iCnt;
    printf("%d\t",iTable);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number : ");
  scanf("%d",&iValue);

  Table(iValue);

  return 0;
}

// Time complexity is -> O(1)