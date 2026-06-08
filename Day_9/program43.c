////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application program which accept number from user and dsiplay its digits in reverse order.
//  (using for loop)
///////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
  int iCnt = 0;
  int iDigit = 0;

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
   iDigit = iNo % 10;
   iNo = iNo / 10;

    printf("%d\t", iDigit);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number : \n");
  scanf("%d",&iValue);

  Display(iValue);
  return 0;
}