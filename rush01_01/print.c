void print(int** matrix, int row, int colom) //es tpuma 
{
    char element;

    for(int i = 0; i < row; ++i)
    {
        for(int j = 0; j < colom; ++j)
        {  
            element = matrix[i][j] + '0';    
            write(1, &element, 1);
            write(1, " ", 2);
        }
        write(1, "\n", 1);
    }
}