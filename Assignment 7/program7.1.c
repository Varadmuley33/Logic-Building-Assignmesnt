// first print all * and then all # according to input 
#include <stdio.h>

void Table(int iNo)
{
   int icnt = 0;

if (iNo < 0)
    {
        iNo = -iNo;
    }

    for ( icnt = 1; icnt <= iNo ; icnt++)
    {
        printf(" * " , iNo); 
       
    }
    for ( icnt = 1; icnt <= iNo ; icnt++)
    {
        printf(" # " , iNo);
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
