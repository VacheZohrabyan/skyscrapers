void valid_element(int** numbers, int row,int colom) //es stuguma zangvaci mech sizeic mec tiv ka te che
{
    int i;
    int j;

    i = 0;
    while (i < row)
    {
        j = 0;
        while (j < colom)
        {
            if (numbers[i][j] > row || numbers[i][j] < 0)
            {
                write(1, "given value are large\n", 22);    
                exit(15); //es naxatesvaca terminat anelu hamar;
            }
            ++j;
        }
        ++i;
    }
}