void element_array_initialized(int** matrix, int row, int colom) //arjeqavoruma 0
{
    int i;
    int j;

    i = 0;
    while (i < row)
    {
        j = 0;  
        while (j < colom)
        {
            matrix[i][j] = 0;
            ++j;
        }
        ++i;
    }
}

int** take_memory_for_numbers(int** numbers, int row,int colom) //./a.out-i koxqi  tveri hamar taracqa vekalum
{
    int i;

    i = 0;
    numbers = (int**)malloc(sizeof(int*) * row);
    if (!numbers)
    {
        write(1, "number memory faild\n", 20);
        exit(2); //malloc faild;
    }
    while (i < row)
    {
        numbers[i] = (int*)malloc(sizeof(int) * colom);
        if (!numbers[i])
        {
            free(numbers);
            exit(2); //numbers faild            
        }
        ++i;
    }
    element_array_initialized(numbers, row, colom);
    return numbers;
}

int** take_memory_for_matrix(int** matrix,int row, int colom) //matrici hamara taracq vekalum
{
    int i;

    i = 0;
    matrix = (int**)malloc(sizeof(int*) * row);
    if (!matrix)
    {
        exit(2);   
    }
    i = 0;
    while (i < row)
    {
        matrix[i] = (int*)malloc(sizeof(int) * colom);
        if (!matrix[i])
        {
            free(matrix);
            exit(2);
        }
        ++i;
    }
    element_array_initialized(matrix,row,colom);
    return matrix;
}