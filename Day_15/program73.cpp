///////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept number or rows and number of columns from user and display below pattern
//
//  Input : iRow = 4    iCol = 4
//
//  Output : *  *  *  *  *
//           *        *  *
//           *     *     *
//           *  *        *
//           *  *  *  *  *
//            
//////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;

  for(i = 1; i <= iRow; i++)
  {
    for(j = 1; j <= iCol; j++)
    {
      if(i == 1 || i == iRow || j == 1 || j == iCol || j == (iRow - i + 1))
      {
      printf("*\t");
      }
      else
      {
        printf(" \t");
      }
    }
    cout<<endl;
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