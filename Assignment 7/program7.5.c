// to find  factorial difference

#include <stdio.h>

int FactorialDiff(int iNo)
{
   int icnt = 0;
   int iFacta = 1;
   int iFactb = 1;
   

   if (iNo < 0)
   {
    iNo = -iNo;
   }
        for(icnt = iNo ; icnt >= 1 ; icnt--)
        {
            if((icnt % 2) == 0)
            {
                iFacta = iFacta * icnt;
            }
            else
            {
                iFactb = iFactb * icnt;
            }
        }
   return iFacta - iFactb ;
  
}

int main()
{
    int iValue = 0;
    int iRet = 0 ;
   

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Odd factorial of number is  %d" , iRet);
    return 0;
}
