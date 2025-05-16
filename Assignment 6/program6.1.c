// 1 to 50 small greater than 50 less than 100 medium greater than 100 large 

#include <stdio.h>

void Number(int iNo)
{
     if(iNo < 0) 
    {

        printf(" Input is invalid \n");
        return;
    }
     if(iNo < 50) 

    {
        printf("Small");

    }

    else if (( iNo >= 50) && (iNo < 100))

    {
        printf("Medium \n");

    }

    
    else if (iNo >= 100) 

    {
        printf("Large \n");

    }

    
}

int main()
{
    int iValue = 0;
   

    printf("Enter number: ");
    scanf("%d", &iValue);
    Number(iValue);

    return 0;
}
