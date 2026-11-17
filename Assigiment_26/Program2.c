#include <stdio.h>

void Display(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        // Convert Capital to Small
        printf("Output : %c\n", ch + 32);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        // Convert Small to Capital
        printf("Output : %c\n", ch - 32);
    }
    else
    {
        // Display as it is
        printf("Output : %c\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}