#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "/home/vache/rush01_01/size_argv.c"
#include "/home/vache/rush01_01/element_argv.c"
#include "/home/vache/rush01_01/print.c"
#include "/home/vache/rush01_01/memory.c"
#include "/home/vache/rush01_01/element_valid.c"
#include "/home/vache/rush01_01/skyscrapers.c"
#include "/home/vache/rush01_01/free_memeory.c"

int size_element_argv(char** argv);
void element(char** argv, int** numbers, int row, int colom);
void print(int** matrix, int row, int colom);
int** take_memory_for_numbers(int** numbers, int row,int colom);
int** take_memory_for_matrix(int** matrix, int row, int colom);
void valid_element(int** numbers, int row, int colom);
void skyscrapers(int**matrix, int** numbers, int row, int colom);
void free_matrix_numbers(int** matrix, int **numbers, int row);

int main(int argc, char** argv)
{
    int row = 0;
    int colom = 0;
    int** numbers;
    int** matrix;

    numbers = NULL;
    matrix = NULL;
    if (argc != 2)
    {
        write(1, "argc many argument\n", 19);
        return (-1);
    }
    colom = row = size_element_argv(argv); //es size vekalum
    numbers = take_memory_for_numbers(numbers,row,colom); //heap-ic taracq 
    matrix = take_memory_for_matrix(matrix,row, colom); //esel
    element(argv, numbers,row ,colom); //es ./a.out koxqi tverna lcnum numbers-i mech 
    valid_element(numbers, row, colom); //es elementnerna stugum vor row-ic mec chlni u poqr chlni 0-ic 
    
    // skyscrapers(matrix,numbers,row,colom); //es duq petq greq
    
    print(numbers, row, colom); //sranq tpum en
    print(matrix, row, colom); //esel

    free_matrix_numbers(matrix, numbers, row); //esel azatuma hishoxutyun@
}