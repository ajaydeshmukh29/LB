///////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept number or rows and number of columns from user and display below pattern
//
//
//  Input : iRow = 5    iCol = 5
//
//  Output : 1   2   3   4   5
//           2   3   4   5   6
//           3   4   5   6   7
//           4   5   6   7   8
//           5   6   7   8   9          
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
    N = i;
    for(j = 1; j <= iCol; j++)
    {
      printf("%d\t",N);
       N++;
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter Number Rows : ");
  scanf("%d",&iValue1);

  printf("Enter Number Column : ");
  scanf("%d",&iValue2);

  Pattern(iValue1, iValue2);
  return 0;
}