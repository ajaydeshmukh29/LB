/////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                                                                     
//  Application which accept number from user and print that number of $ and * on Screen               
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
  int iCnt = 0;

  if(iNo < 0)
   {
     iNo = -iNo;
   }

  printf("Output : ");

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("$ * ");;
  }
}

int main()
{
  int iValue = 0;
  printf("Input : ");
  scanf("%d",&iValue);

  Pattern(iValue);

  return 0;
}

// Time Complexity is -> O(N)