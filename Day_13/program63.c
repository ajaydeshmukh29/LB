///////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept number or rows and number of columns from user and display below pattern
//
//
//  Input : iRow = 5    iCol = 5
//
//  Output : 1   2   3   4   5
//          -1  -2  -3  -4  -5
//           1   2   3   4   5
//          -1  -2  -3  -4  -5
//           1   2   3   4   5          
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0;
  int j = 0;
  int N = 0;

  for(i = 1; i <= iRow; i++)
  {
    for(j = 1, N = 1; j <= iCol; j++,N++)
    {
      if(i % 2 == 0)
      {
        printf("%d\t",-N);
      }
      else
      {
        printf(" %d\t",N);
      }
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;
  
  printf("Enter Number of Rows : ");
  scanf("%d",&iValue1);

  printf("Enter Number of Columns : ");
  scanf("%d",&iValue2);

  Pattern(iValue1,iValue2);

  return 0;
}

// Time Complexity : 