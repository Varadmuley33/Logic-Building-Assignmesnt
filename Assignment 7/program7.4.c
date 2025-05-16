// to find odd factorial

#include <stdio.h>

int OddFactorial(int iNo)
{
   int icnt = 0;
   int iFact = 1;
   

   if (iNo < 0)
   {
    iNo = -iNo;
   }
        for(icnt = iNo ; icnt >= 1 ; icnt--)
        {
            if((icnt % 2) != 0)
            {
                iFact = iFact * icnt;
            }
        }
   return iFact ;
  
}

int main()
{
    int iValue = 0;
    int iRet = 0 ;
   

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd factorial of number is  %d" , iRet);
    return 0;
}
