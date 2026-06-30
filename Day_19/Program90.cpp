/////////////////////////////////////////////////////////////////////////
//
//  Program which accept one number and position from user and OFF that Bit. Return modified number.
//
//  Input : 10    Position : 2
//  Output: 8
/////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo, int iPos)
{
  UINT iMask = 0X00000001;
  UINT iAns = 0;

  iMask = iMask << (iPos - 1);
  iAns = iNo ^ iMask;

  cout<<iAns;
}

int main()
{
  int iNum = 0;
  int iLocation = 0;
  int iRet = 0;

  cout<<"Enter Number : ";
  cin>>iNum;

  cout<<"Enter Location : ";
  cin>>iLocation;

  iRet = OffBit(iNum,iLocation);

  return 0;
}