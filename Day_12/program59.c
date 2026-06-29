//////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept number of rows and number of columns from user and display below pattern
//
///////////////////////////////////////////////////////////////////////////////////////////

/*
  Input : iRow = 4      iCol = 4

  Output :1       2       3       4
          5       6       7       8
          9       10      11      12
          13      14      15      16
*/

#include<stdio.h>

void pattern(int iRow, int iColumn)
{
  int i = 0, j = 0, iCnt = 1;

  for(i = 1; i <= iRow; i++)
  {
    {
      for(j = 1; j <= iColumn; j++)
      {
        printf("%d\t",iCnt++);
      }
      printf("\n");
    }
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of Rows and Columns : \n");
  scanf("%d",&iValue1);
  scanf("%d",&iValue2);

  pattern(iValue1,iValue2);


  return 0;
}