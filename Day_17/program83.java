/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Program which checks whether first and last bit is ON or OFF. First Bit means number 1 and last bit means bit number 32
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class program83
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    int iNum = 0;
    int iAns = 0;
     int iMask = 0X80000001;

    System.out.println("Enter Number : ");
    iNum = sobj.nextInt();

    iAns = iNum & iMask;

    if(iAns == iMask)
    {
      System.out.print("Bit is ON");
    }
    else
    {
      System.out.println("Bit is OFF");
    }
  }
}
