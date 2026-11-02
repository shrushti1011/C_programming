#include <stdio.h>

int KMtoMeter(int iNo)
{
    int iAns = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    iAns = iNo * 1000;
    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d\n", iRet);

    return 0;
}