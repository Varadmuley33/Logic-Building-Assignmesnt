#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int icnt = 0;
    
    if(iNo < 0) {
        iNo = -iNo;
    }

    for(icnt = 1 ; icnt <= 5; icnt++)
    {
      printf(" %d " , iNo * icnt);
    } 
       
           
    
}

int main()
{
    int iValue = 0;
   

    printf("Enter number: ");
    scanf("%d", &iValue);
    MultipleDisplay(iValue);

    return 0;
}
