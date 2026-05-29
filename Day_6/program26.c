/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Application which Display if number is less than 50 print samll, if it greater than 50 and less than 100 then print medium and greater than 100 print large
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Number(int iNo)
{
  printf("Output : ");

  if(iNo <= 50)
  {
    printf("Number is Small\n");
  }
  else if (iNo > 50 && iNo <= 100) 
  {
    printf("Number is Medium\n");
  }
  else
  {
    printf("Number is Large");
  }
  
}

int main()
{
  int iValue = 0;

  printf("Enter number (Input) : ");
  scanf("%d",&iValue);

  Number(iValue);

  return 0;
}


// Time complexity is -> O(1)