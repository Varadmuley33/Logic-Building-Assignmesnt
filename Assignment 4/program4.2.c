//to display factors in decreasing order 

#include<stdio.h>

void FactRev(int iNo)

{
int icnt = 0;

if(iNo < 0)
{
    iNo = -iNo;
}
for(icnt = iNo/2 ; icnt >= 1  ; icnt--)

{
    if((iNo % icnt) == 0)
{

    printf("%d \n" , icnt);
}
}


}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0 ;

}