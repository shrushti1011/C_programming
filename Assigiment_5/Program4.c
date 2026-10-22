#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if (iValue % 3 == 0)
    {
        if (iValue % 5 == 0)
        {
            printf("It is divisible by both 3 and 5.\n");
        }
        else
        {
            printf("It is divisible by 3 but not by 5.\n");
        }
    }
    else
    {
        printf("It is not divisible by 3.\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}