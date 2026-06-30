package Day_16;

import java.util.*;

class StringX
{
  public int CountCapital(String str)
  {
    int i = 0, iCount = 0;

    char Arr[] = str.toCharArray();

    for(i = 0; i < str.length(  ); i++)
    {
      if(Arr[i] >= 'A' && Arr[i] <= 'Z');
      {
        iCount++;
      }
    }
    return iCount++;
  }
}

class program79
{
  public static void main(String A[])
  {
    Scanner sobj = new Scanner(System.in);
    String data = null;
    StringX strobj = new StringX();
    int iRet = 0;

    System.out.println("Enter String : ");
    data = sobj.nextLine();

    iRet = strobj.CountCapital(data);
    System.out.println("Number of Capital characters : "+iRet);


  }
}