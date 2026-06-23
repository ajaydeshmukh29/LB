///////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept number or rows and number of columns from user and display below pattern
//
//  Input : iRow = 4    iCol = 4
//
//  Output :  1  2  3  4
//               2  3  4
//                  3  4  
//                     4  
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
  int i = 0;
  int j = 0;

  for(i = 1; i <= iRow; i++)
  {
    for(j = 1; j <= iCol; j++)
    {
      if(i > j)
      {
        printf(" \t");
      }
      else
      {
        printf("%d\t",j);
      }
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  cout<<"Enter Number of Rows : ";
  cin>>iValue1;

  cout<<"Enter Number of Columns : ";
  cin>>iValue2;

  Pattern(iValue1,iValue2);
  return 0;
}

// Time Complexity is : O(N^2)