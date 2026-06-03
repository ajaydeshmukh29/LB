////////////////////////////////////////////////////////////////////
//
// Asking user to printing number in the range 
//
///////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo1, int iNo2)
{
  int iCnt = 0;

  for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
  {
    printf("%d\t", iCnt);
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter Range1 :\t");
  scanf("%d",&iValue1);
  printf("Enter Range2 :\t");
  scanf("%d",&iValue2);

  Display(iValue1, iValue2);

  return 0;
}