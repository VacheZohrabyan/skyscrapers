void element(char** argv, int** numbers, int row, int colom) //es argv-i michi elementnerna vercnum u qcum numbers-i mech
{
    int i;
    int j;
    int k;

    i = 0;
    while(argv[1][k] != '\0' && i < row)
    {
        j = 0;
        while(j < colom)
        {
            while (argv[1][k] == ' '){
                ++k;
            }
            numbers[i][j] = argv[1][k] - '0';
            ++k;
            ++j;
        }
        ++i;
    }
}