#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    BOOL bFlag = FALSE;

    while (*str != '\0')
    {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            bFlag = TRUE;
            break;
        }
        str++;
    }
    return bFlag;
}

int main()
{
    char arr[30];
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    bRet = ChkVowel(arr);

    if (bRet == TRUE)
    {
        printf("Output : TRUE\n");
    }
    else
    {
        printf("Output : FALSE\n");
    }

    return 0;
}