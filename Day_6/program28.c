//////////////////////////////////////////////////////////////////////////////////
//
//  Application program which find factorial of given number
//
//////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFactMul = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFactMul = iFactMul * iCnt;
        printf("%d\t",iFactMul);
    }

    return iFactMul;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Input : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("\nOutput : %d\n", iRet);

    return 0;
}

// Time Complexity is -> O(N)