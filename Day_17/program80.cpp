/////////////////////////////////////////////////////////////////////////
//
//  Program which checks whether 15th bit is ON or OFF
//
/////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
  UINT iMask = 0X00004000;
  UINT iAns = 0;

  iAns = iNo & iMask;

  if(iAns == iMask)
  {
    cout<<"Bit is ON : ";
    return TRUE;
  }
  else
  {
    cout<<"Bit is OFF : ";
    return FALSE;
  }

}

int main()
{
  UINT Num = 0, iMask = 0, iRet = 0;

  cout<<"Enter Number : ";
  cin>>Num;

  iRet = ChkBit(Num);

  cout<<iRet;

  return 0;
}