 ////////////////////////////////////////////////////////////////////////////////////
//
//  File name :     program2.c
//  Description :   program to check whether it entered number contains 0 or not
//  Author :        Varad Nitin Muley
//  Date :          16-05-2025
//
////////////////////////////////////////////////////////////////////////////////////

 #include<stdio.h>
  #define TRUE 1
  #define FALSE 0


  typedef int BOOL;

  BOOL ChkZero(int iNo)
  {
    int iDigit = 0 ;
    if (iNo < 0 )
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
    iDigit = iNo % 10;

    if (iDigit == 0)
    {
        return TRUE;
    }

      iNo = iNo / 10; 
    }
return FALSE; 
    
  }


  int main ()
  {
  int iValue = 0 ; 
  BOOL bRet = FALSE ;

  printf("Enter Number :\n ");
  scanf("%d",&iValue);
  bRet = ChkZero(iValue);  

  if (bRet == TRUE)
  {
    printf("It Contains zero");
  }
  else 
  {
    printf(" There is no zero");
  }

  
  return 0 ; 

  }

 