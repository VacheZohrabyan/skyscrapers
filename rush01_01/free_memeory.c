void free_matrix_numbers(int** matrix, int **numbers, int row) { //es azatuma vekalac taracq@
    int i;
    
    i = 0;
    while (i < row) {
        free(matrix[i]);
        free(numbers[i]);
        ++i;
    }
    free(matrix);
    free(numbers);
}