///////////////////////////////////////////////////////////////////////////////////////////
//
//  Accept number or rows and number of columns from user and display below pattern
//
//
//  Input : iRow = 5    iCol = 5
//
//  Output : $   *   *   *   *
//           *   $   *   *   *
//           *   *   $   *   *
//           *   *   *   $   *
//           *   *   *   *   $   
//
////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

void Pattern(int iRows, int iCol)
{
  int i = 0;
  int j = 0;

  for(i = 1; i <= iRows; i++)
  {
    for(j = 1; j <= iCol; j++)
    {
      if(i == j)
      {
        cout<<"$\t";
      }
      else
      {
        cout<<"*\t";
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

// Time Complexity is : O(N^2)