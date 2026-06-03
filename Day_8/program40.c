////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which accept range from user and display all even numbers in between that range
//
//  (for loop)
/////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iStart, int iEnd)
{
  int iCnt = 0;

  if (iStart > iEnd)
  {
    printf("Invalid\n");
  }
  
  for(iCnt = iStart; iCnt <= iEnd; iCnt++)
  {
    if(iCnt % 2 == 0)
    {
      printf("%d\t", iCnt);
    }
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;
  
  printf("Enter Range1 : \n");
  scanf("%d",&iValue1);

  printf("Enter Range2 : ");
  scanf("%d",&iValue2);

  Display(iValue1, iValue2);

  return 0;
}