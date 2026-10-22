#include <stdio.h>
#include <stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    
    if (fSalary <= 0.0f || iYears < 0) {
        printf("Invalid Input\n");
    }
    else if (iYears > 10) {
        fBonus = fSalary * 0.15f; \
        printf("Input: %.0f %d -> Bonus = %.2f\n", fSalary, iYears, fBonus);
    }
    else if (iYears >= 5 && iYears <= 10) {
        fBonus = fSalary * 0.10f; 
        printf("Input: %.0f %d -> Bonus = %.2f\n", fSalary, iYears, fBonus);
    }
    else {
        fBonus = fSalary * 0.05f; 
        printf("Input: %.0f %d -> Bonus = %.2f\n", fSalary, iYears, fBonus);
    }
}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter monthly salary and years of service: ");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}