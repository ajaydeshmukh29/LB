////////////////////////////////////////////////////////////////////////////////////
//
//  Application which checks whether 7th & 15th & 21st, 28th bit is ON or OFF
//
////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
  UINT iMask = 0X08040040; 
  UINT iAns = 0;

  iAns = iNo & iMask;

  if(iAns == iMask)
  {
    cout<<"Bits are ON"<<endl;
    return TRUE;
  }
  else
  {
    cout<<"Bits are OFF"<<endl;
    return FALSE;
  }

}

int main()
{
  UINT iNum = 0, iRet = FALSE;

  cout<<"Enter Number : ";
  cin>>iNum;

  iRet = ChkBit(iNum);

  cout<<"Bit is : "<<iRet;

  return 0;
}