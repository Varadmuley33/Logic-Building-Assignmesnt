#include<stdio.h>
#include<ctype.h>
void DisplayConvert(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c",tolower(cValue));
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c",toupper(cValue));

    }
}
int main()
{
    char cValue='\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}