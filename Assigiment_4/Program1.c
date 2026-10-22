#include<stdio.h>
#include<stdlib.h>
void checkNumber(int  iValue)
{
    if(iValue >0)
    {
      printf("positive  number\n");  
    }
    else if(iValue < 0) 
    {
        printf("negative number\n");
    }      
    else
    {
        printf("zero\n");
    }
}
int main()
{
    int iValue = 0;

    printf("enter a number:");
    scanf("%d",&iValue);

    checkNumber(iValue);

    return EXIT_SUCCESS;

}