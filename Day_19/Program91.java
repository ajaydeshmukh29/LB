/////////////////////////////////////////////////////////////////////////
//
//  Program which accept one number and position from user and ON that Bit. Return modified number.
//
//  Input : 10  Position : 3
//  Output: 14
/////////////////////////////////////////////////////////////////////////


package Day_19;

import java.util.*;

class InnerProgram91
{
    int ChangeBit(int iNo, int iPos)
    {
        int iMask = 0X00000001;
        int iAns = 0;

        iMask = iMask << (iPos - 1);

        iAns = iNo | iMask;

        return iAns;
    }
}

public class Program91
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNum = 0;
        int iLocation = 0;
        int iRet = 0;

        System.out.print("Enter Number : ");
        iNum = sobj.nextInt();

        System.out.print("Enter Position : ");
        iLocation = sobj.nextInt();

        InnerProgram91 obj = new InnerProgram91();

        iRet = obj.ChangeBit(iNum, iLocation);

        System.out.println("Updated Number is : " + iRet);
    }
}