//////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept N numbers from user and return the difference between largest and smallest number
//
//////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSmall = Arr[0];
    int iLarge = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iSmall)
        {
            iSmall = Arr[iCnt];
        }

        if(Arr[iCnt] > iLarge)
        {
            iLarge = Arr[iCnt];
        }
    }

    return (iLarge - iSmall);

}

int main()
{
  int iSize = 0, N = 0, iRet = 0, iCnt = 0;
  int *p = NULL;

  printf("Enter Size of Array : ");
  scanf("%d",&iSize);

  p = (int *)malloc(iSize * sizeof(int));
  if(p == NULL)
  {
    printf("Memory is not allocated");
  }

  printf("Enter elements : \n");
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    scanf("%d",&p[iCnt]);
  }

  iRet = Difference(p,iSize);

  printf("Difference is : %d",iRet);

  free(p);

  return 0;
}