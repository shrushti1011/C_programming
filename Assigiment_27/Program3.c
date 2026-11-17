#include <stdio.h>

int Difference(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
        {
            iSmallCnt++;
        }
        else if (*str >= 'A' && *str <= 'Z')
        {
            iCapCnt++;
        }
        str++;
    }
    return (iSmallCnt - iCapCnt);
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    iRet = Difference(arr);

    printf("Difference is : %d\n", iRet);

    return 0;
}