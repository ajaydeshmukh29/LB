////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which accept one number from user and off 7th and 10th  bit of that number. And Return modified number.
//
//  Input : 577
//  Output: 1
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


package Day_18;

import java.util.*;

public class Program86 
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    int iNo = 0;
    int iMask = 0X00000240;
    int iAns = 0;

    System.out.println("Enter Number : ");
    iNo = sobj.nextInt();

    iAns = iNo ^ iMask;

    System.out.println("Updated Number is : "+iAns);
  }
}
