#########################################################################
#
# Program which accepts one number and position from user and toggles
# that bit. Return modified number.
#
# Input : 10  Position : 3
# Output: 14
#
#########################################################################

def ChangeBit(iNo, iPos):
    iMask = 0x00000001

    iMask = iMask << (iPos - 1)

    iAns = iNo ^ iMask

    return iAns


def main():
    iNum = int(input("Enter Number : "))
    iLocation = int(input("Enter Position : "))

    iRet = ChangeBit(iNum, iLocation)

    print("Updated Number is :", iRet)


if __name__ == "__main__":
    main()