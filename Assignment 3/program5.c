#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char cValue)
{
    if((cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
       cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue ='\0';
    bool bRet = false;
    printf("Enter the Character\n");
    scanf("%c",&cValue);
    bRet = ChkVowel(cValue);
    if(bRet==true)
    {
        printf("It is a Vowel");

    }
    else
    {
       printf("It is not a Vowel");
    }
}