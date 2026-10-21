#include<stdio.h>
#include<stdlib.h>

void Display (int iNo)
{
    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d\n",iValue);

    Display(iValue);

    return EXIT_SUCCESS;
}