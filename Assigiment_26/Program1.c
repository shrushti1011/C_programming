#include <stdio.h>

void DisplayASCII()
{
    int iCnt = 0;

    printf("-----------------------------------------\n");
    printf("Decimal\tHex\tOctal\tSymbol\n");
    printf("-----------------------------------------\n");

    for (iCnt = 0; iCnt <= 255; iCnt++)
    {
        // For control characters or unprintable values, display a placeholder
        if (iCnt < 32 || iCnt == 127)
        {
            printf("%d\t%02X\t%03o\t[Ctrl]\n", iCnt, iCnt, iCnt);
        }
        else
        {
            printf("%d\t%02X\t%03o\t%c\n", iCnt, iCnt, iCnt, (char)iCnt);
        }
    }
}

int main()
{
    DisplayASCII();

    return 0;
}