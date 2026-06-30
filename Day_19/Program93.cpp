///////////////////////////////////////////////////////////////////////
//
//  Program which accept one number from user and toggle contents of first and last nibble of the number. Retun modified number.
//
///////////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

typedef unsigned int UINT;

int main()
{
    UINT iNum = 0;
    UINT iMask = 0xF000000F;
    UINT iAns = 0;

    cout << "Enter Number : ";
    cin >> iNum;

    iAns = iNum ^ iMask;

    cout << "Updated Number : " << iAns;

    return 0;
}