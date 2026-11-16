#include <stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    if (str == NULL)
    {
        return 0;
    }

    while (*str != '\0')
    {
        if (*str == ' ')
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string : ");
    scanf(" %[^\n]s", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces : %d\n", iRet);

    return 0;
}