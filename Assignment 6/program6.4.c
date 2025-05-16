// display table of number 

#include <stdio.h>

void Table(int iNo)
{
   int icnt = 0;

if (iNo < 0)
    {
        iNo = -iNo;
    }

    for ( icnt = 1; icnt <= 10 ; icnt++)


    {
        printf("%d\n", iNo * icnt);
    }
    
}

int main()
{
    int iValue = 0;
   

    printf("Enter number: ");
    scanf("%d", &iValue);
    Table(iValue);

    return 0;
}
