#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DisplaySchedule(char chDiv)
{
    switch (chDiv)
    {
        case 'A':
        case 'a':
            printf("Your exam at 7 AM\n");
            break;

        case 'B':
        case 'b':
            printf("Your exam at 8.30 AM\n");
            break;

        case 'C':
        case 'c':
            printf("Your exam at 9.20 AM\n");
            break;

        case 'D':
        case 'd':
            printf("Your exam at 10.30 AM\n");
            break;

        default:
            printf("Invalid division\n");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your devision: ");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}