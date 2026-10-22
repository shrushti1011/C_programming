#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if (iAge < 0)
    {
        printf("Invalid age\n");
    }
    else if (iAge >= 18)
    {
        printf("Eligilible for voting\n");
    }
    else
    {
        printf("not Eligible for voting\n");
    }
}
int main()
{
    int iAge = 0;

    printf("Enter your age:");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}