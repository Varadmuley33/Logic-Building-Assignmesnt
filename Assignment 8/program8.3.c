// convert km to meter
#include <stdio.h>

int KMToMeter(int iNo)
{
  
   int Meter = 0 ; 

   if (iNo < 0)
   {
    iNo = -iNo;
   }
   {
        Meter = iNo * 1000;
   }
   return Meter ;
}

int main()
{
    int iValue = 0;
    int iRet = 0 ;
   

    printf("Enter KM: ");
    scanf("%d", &iValue);

    iRet = KMToMeter(iValue);

    printf("Value after converting is %d" , iRet);
    return 0;
}

    