#include<stdio.h>
#include<stdlib.h>
void FinsGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater\n",iFirst);
    }
    else if (iSecond > iFirst)
    {
        printf("%d is greater \n",iSecond);
    }
    else
    {
        printf("both number are equal\n");
    }
    
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two number:");
    scanf("%d %d",&iValue1,iValue2);

    FinsGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}