#include <stdio.h>

double SquareMeter(float fValue)
{
    if (fValue < 0)
    {
        fValue = -fValue;
    }
   double dSqMeter = 0.0;

    dSqMeter = 0.0929 * iNo;

    return dSqMeter;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%f", &fValue);

    dRet = SquareMeter(fValue);

    printf("Area in square meters: %f\n", dRet);
    return 0;
}
