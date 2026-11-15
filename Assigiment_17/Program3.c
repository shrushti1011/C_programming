void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = 'A';
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
        }
        ch++;
        printf("\n");
    }
}