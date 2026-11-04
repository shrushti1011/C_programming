#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    // Validation: Must be positive and start <= end
    if (iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        return -1; // -1 indicates invalid range
    }

    int iSum = 0;
    int iCnt = 0;

    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum += iCnt;
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point: ");
    scanf("%d", &iValue1);

    printf("Enter ending point: ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if (iRet == -1)
    {
        printf("Invalid range\n");
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}