///////////////////////////////////////////////////////////////////////////
//
//  Program which checks whether 7th, 8th and 9th bit are ON or OFF.
//
///////////////////////////////////////////////////////////////////////////


import java.util.Scanner;

public class program84 
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    int iNo = 0;
    int iAns = 0;
    int iMask = 0X000001840;

    System.out.println("Enter Number : ");
    iNo = sobj.nextInt();

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
      System.out.println("7th , 8th and 9th Bits are ON");
    }
    else
    {
      System.out.println("Bits are OFF");
    }
  }
  
}
