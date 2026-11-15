void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    
    for(i = 1; i <= iRow; i++)
    {
        char ch = (i % 2 != 0) ? 'A' : 'a';
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch + (j - 1));
        }
        printf("\n");
    }
}