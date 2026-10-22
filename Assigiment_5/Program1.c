#include<stdio.h>
#include<stdlib.h>
void FindGreatest(int iFirst,int iSecond, int iThird)
{
    if((iFirst > iSecond) && (iFirst > iThird))
    {
        printf("First is  Greatest number\n");
    }
    else if((iSecond > iFirst) && (iSecond > iThird))
    {
        printf("second is Greater number\n");
    }
    else
    {
        printf("Thirs is Greater number\n");
    }
}
int main()
{
    int iVlaue1 = 0,iVlaue2 = 0, iVlaue3 = 0;
    printf ("Enter three numbers:");
    scanf("%d %d %d",&iVlaue1,&iVlaue2,&iVlaue3);

    FindGreatest(iVlaue1,iVlaue2,iVlaue3);

    return EXIT_SUCCESS;
}

