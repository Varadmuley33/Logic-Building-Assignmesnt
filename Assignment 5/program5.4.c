#include <stdio.h>

void OddDisplay(int iNo)
{
    int icnt = 0;
    
    if(iNo < 0) {
        iNo = -iNo;
    }

    for(icnt = 1 ; icnt <= iNo; icnt++)
    {
      if((icnt % 2) != 0)
      {
        printf(" %d " , icnt);
      }
    } 
       
           
    
}

int main()
{
    int iValue = 0;
   

    printf("Enter number: ");
    scanf("%d", &iValue);
    OddDisplay(iValue);

    return 0;
}
