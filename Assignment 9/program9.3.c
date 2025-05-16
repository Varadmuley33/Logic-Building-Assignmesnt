 /////////////////////////////////////////////////////////////////////
//
//  File name :     program9.3.c
//  Description :   program to count frequency of 2 in the number
//  Author :        Varad Nitin Muley
//  Date :          16-05-2025
//
/////////////////////////////////////////////////////////////////////


 #include<stdio.h>

  int CountTwo(int iNo)
  {
    int iDigit = 0 ;
    int icnt = 0;
    if (iNo < 0 )
    {
        iNo = -iNo;

    }
    
    while (iNo != 0)
    {
        iDigit = iNo % 10;

        if (iDigit == 2)    
        {
            icnt++;       
        }

        iNo = iNo / 10;
    }
    return icnt;
  }

  int main ()

  {
  int iValue = 0 ; 
  int iRet = 0 ;
  printf("Enter Number :\n ");
  scanf("%d",&iValue);
  iRet = CountTwo(iValue);

  printf(" Frequency of 2 is %d",iRet);
  return 0 ; 

  }

 