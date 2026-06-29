////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which accept one number from user and off 7th bit of that number if it is on. And Return modified number
//
//  Input : 79
//  Output: 15
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNum)
{
  UINT iMask = 0X00000040;
  UINT iAns = 0;

  iAns = iNum ^ iMask;
}

int main()
{
  int iNo = 0, iRet = 0;
  int iMask = 0;
  int iAns = 0;

  cout<<"Enter Number : ";
  cin>>iNo;

  iRet = ToggleBit(iNo);
  cout<<"Updated Number is : "<<iRet;

  return 0;
}