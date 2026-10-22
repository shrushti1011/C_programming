#include <stdio.h>
#include <stdlib.h>

void CalculateDiscout(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

   
    if (fAmount < 1000.0f) {
        fDiscount = 0.0f;
    }
    else if (fAmount >= 1000.0f && fAmount <= 5000.0f) {
        fDiscount = 10.0f; 
    }
    else {
        fDiscount = 20.0f; 
    }

    fFinalAmount = fAmount - (fAmount * (fDiscount / 100.0f));

    printf("Input: %.0f -> Payable Amount = %.2f\n", fAmount, fFinalAmount);
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f", &fAmount);

    CalculateDiscout(fAmount);

    return EXIT_SUCCESS;
}