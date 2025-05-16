// Accept temp and convert fahrenheit to celsius

#include <stdio.h>

double FhToCs(float fTemp )
{
   
   float fahrenheit = fTemp ;
   
 double dCelsius = 0.0;

    dCelsius =  (fTemp - 32) * (5.0 / 9.0);

    return dCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0 ;
   

    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fValue);

    dRet = FhToCs(fValue);

    printf("Converted temperature  to celsius is   %f" , dRet);
    return 0;
}
