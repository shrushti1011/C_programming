#include<stdio.h>
#include<stdlib.h>

void CheckCharacterType(char cValue)
{
    if (cValue >= 'A' && cValue<= 'Z')
    {
        printf("input: %C -> uppercase alphabet\n",cValue);
    }
    else if (cValue >= 'a' && cValue <= 'z')
    {
        printf("input: %c -> lower Alphabrt\n",cValue);
    }
   else if (cValue >= '0' && cValue <= '9') 
   {
        printf("Input: %c -> Digit\n", cValue);
    }
    else
    {
        printf("Input: %c -> Special Character\n", cValue);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf(" %c", &cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}