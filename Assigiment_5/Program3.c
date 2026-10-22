#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if(fMarks<0 || fMarks >100)
    {
        printf("Invalid Marks");
    }
    if(fMarks >= 90)
    {
        printf("Grade is A");
    }
    else if(fMarks >= 75)
    {
        printf("Grade is B");
    }
    else if (fMarks >= 60)
    {
        printf("Grade is c");
    }
    else if (fMarks >= 40)
    {
        printf("Grade is D");
    }
    else
    {
        printf("Fail");
    }
    

}
int main()
{
    float fMarks = 0.0f;
    printf("Enetr thr marks");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}