////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and accept one another number as NO and check whether NO is present or NOT.
//
//  Input : 6
//  No    : 66
//  Elements : 85 66  3 66  93  88
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



#include<stdio.h>
int main()
{
  int N = 0;
  int No = 0;
  int iCnt = 0;
  int iValue = 0;
  int flag = 0;

  printf("Enter N elements : ");
  scanf("%d",&N);

  printf("Check No : ");
  scanf("%d",&No);

  printf("Enter elements : \n");

  for(iCnt = 1; iCnt <= N; iCnt++)
  {
    scanf("%d",&iValue);

    if(iValue == No)
    {
      flag = 1;
    }
  }

  if(flag == 1)
  {
    printf("Number is present\n");
  }
  else
  {
    printf("Number is not present\n");
  }

  return 0;
  
}