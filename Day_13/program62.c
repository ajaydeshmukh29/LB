///////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept number or rows and number of columns from user and display below pattern
//
//
//  Input : iRow = 5    iCol = 5
//
//  Output : a   b   c   d   e
//           A   B   C   D   E
//           a   b   c   d   e
//           A   B   C   D   E
//           a   b   c   d   e
//
/////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>


void Pattern(int iRow, int iCol)
{
  int i = 0;
  int j = 0;
  char ch = 'A';
  char ch2 = 'a';

  for(i = 1; i <= iRow; i++)
  {
    for(j = 1, ch = 'A'; j <= iCol; j++,ch++)
    {
      if(i % 2 == 0)
      {
        printf("%c\t",ch);
      }
      else
      {
        printf("%c\t",ch2);
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

  Pattern(iValue1, iValue2);

  return 0;
}

// Time Complexity is : O(N^2)