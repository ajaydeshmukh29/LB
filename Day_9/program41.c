/////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Application which accept range from user and return addition of all numbers in between that range.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iStart, int iEnd)
{
  if(iStart > iEnd)
  {
    printf("Invalid Range\n");
    return;
  }

  int iCnt = 0;
  int iAddition = 0;
  for(iCnt = iStart; iCnt <= iEnd; iCnt++)
  {
    iAddition = iAddition + iCnt;
  }
   printf("Addition is : %d", iAddition);
}


int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter Num1 : \n");
  scanf("%d",&iValue1);

  printf("Enter Num2 : \n");
  scanf("%d",&iValue2);

  Display(iValue1, iValue2);

  return 0;
}