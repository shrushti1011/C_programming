#include <stdio.h>

void Display(char ch)
{
    char iCnt = '\0';

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Output : ");
        for (iCnt = ch; iCnt <= 'Z'; iCnt++)
        {
            printf("%c ", iCnt);
        }
        printf("\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Output : ");
        for (iCnt = ch; iCnt >= 'a'; iCnt--)
        {
            printf("%c ", iCnt);
        }
        printf("\n");
    }
    else
    {
        return;
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