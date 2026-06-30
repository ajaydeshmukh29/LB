/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and return difference between summation of even elements and summation of odd elements
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{

  int iCnt = 0;
  int oSum = 0;
  int eSum = 0;

  for(iCnt = 0; iCnt < iLength; iCnt++)
  {
    if(Arr[iCnt] % 2 == 0)
    {
      eSum = eSum + Arr[iCnt];
    }
    else
    {
      oSum = oSum + Arr[iCnt];
    }
  }

  printf("(%d - %d)\n",eSum,oSum);
  return eSum - oSum;
   
}

int main()
{
  int iSize = 0, iRet = 0, iCnt = 0, iLength = 0;
  int *p = NULL;

  printf("Enter number of elements\n");
  scanf("%d",&iSize);

  p = (int *)malloc(iSize * sizeof(int));

  if(p == NULL)
  {
    printf("Unable to allocate memory\n");
    return -1;
  }

  printf("Enter %d elements\n",iSize);
  
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&p[iCnt]);
  }
  
  iRet = Difference(p, iSize);

  printf("Result is %d\n",iRet);

  free(p);

  return 0;
}