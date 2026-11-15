void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iCnt = 1;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iCnt);
            iCnt++;
        }
        printf("\n");
    }
}