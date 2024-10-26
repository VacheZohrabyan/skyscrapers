int my_sqrt(int size) //qarakusi matric unenealuu hamara
{
    int i;

    if (size <= 1)
    {
        return -1;
    }
    i = 2;
    while (i <= size / 2)
    {
        if (i * i == size)
        {
            return i;
        }
        ++i;
    }
    return -1;
}

int element_count(char** argv) // tvic u prabelic baci urish ban vor lini codic durs kqci
{
    int i;
    int size = 0;

    i = 0;
    while(argv[1][i] != '\0')
    {
        if ((argv[1][i] < '0' || argv[1][i] > '9') && argv[1][i] != ' ')
        {
            write(1, "element carakter faild\n", 23);
            exit(-1);
        }
        if (argv[1][i] == ' ')
        { 
            if (i > 0 && argv[1][i - 1] >= '0' && argv[1][i - 1] <= '9')
            {
                ++size;
            }
        }
        else
        {
            if ((argv[1][i] >= '0' && argv[1][i] <= '9') 
            && argv[1][i + 1] == ' ' && argv[1][i + 1] == '\0')
            {
                ++size;
            }
        }
        ++i;
    }
    size = my_sqrt(size + 1);
    if (size == -1)
    {
        write(1, "size mismatch\n", 14);
        exit(15);
    }
    return size;
}

int size_element_argv(char** argv) //es size veradarcnum
{
    int size;

    if (!argv[1][0])
    {
        exit(15);//terminate;
    }
    size = element_count(argv);
    return size;
}