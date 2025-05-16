#include <stdio.h>

int FactDiff(int iNo)
{
    int icnt = 0;
    int sumFact = 0;
    int sumNonFact = 0;

    if(iNo < 0) {
        iNo = -iNo;
    }

    for(icnt = 1; icnt < iNo; icnt++) {
        if(iNo % icnt == 0) {
           
            sumFact = sumFact + icnt;
        } else {
          
            sumNonFact = sumNonFact + icnt;
        }
    }

   
    int diff = sumFact - sumNonFact;
    return diff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d\n", iRet);

    return 0;
}
