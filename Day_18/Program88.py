#########################################################################################################
##
##  Application which accept one number from user and ON its first 4 Bit. And return modified number
##  
##  Input : 73
##  Output: 79
##
#########################################################################################################

iNo = 0
iMask = 0X0000000f;
iAns = 0 

iNo = int(input("Enter Number : "));

iAns = iNo | iMask

print(iAns);
