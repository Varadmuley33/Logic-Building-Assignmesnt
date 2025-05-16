// accept the number from user and convert it from us dollar to inr 1 dollar = 70 inr rs  

#include <stdio.h>

int DollarToINR(int iNo)
{
   int icnt = 1;
   int iINR = 0 ; 

   if (iNo < 0)
   {
    iNo = -iNo;
   }
   {
        iINR = iNo * 70;
   }
   return iINR ;
}

int main()
{
    int iValue = 0;
    int iRet = 0 ;
   

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d" , iRet);
    return 0;
}
