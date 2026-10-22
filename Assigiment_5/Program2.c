#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if ((iYear % 400 == 0) || ((iYear % 4 == 0) && (iYear % 100 != 0)))
    {
        printf("this Year is leep year\n");
    }
    else
    {
        printf("this year is not leep year\n");
    }
}
int main()
{
    int iYear = 0;
    
    printf("Enter year:");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}