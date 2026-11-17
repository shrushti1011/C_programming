#include <stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    
    while (*end != '\0')
    {
        end++;
    }
    end--;

    
    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[30];

    printf("Enter string : ");
    scanf("%[^\n]s", arr);

    Reverse(arr);

    printf("Reversed string is : %s\n", arr);

    return 0;
}