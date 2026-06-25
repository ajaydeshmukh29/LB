///////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept number or rows and number of columns from user and display below pattern
//
//  Input : iRow = 4    iCol = 4
//
//  Output :  *  *  *  # 
//            *  *  #  @    
//            *  #  @  @   
//            #  @  @  @ 
//            
//////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRows, int iCol)
{
  int i = 0, j = 0, k = 0;

  for(i = 1; i <= iRows; i++)
  {
    for(j = 1; j <= iCol; j++)
    {
      if((i + j) < (iCol + 1))
      {
        printf("*\t"); 
      }
      else if((i+j) == (iCol+1))
      {
      printf("#\t");
      }
      else
      {
        printf("@\t");
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