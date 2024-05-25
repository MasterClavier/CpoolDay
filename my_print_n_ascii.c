int print_char(char);

void my_print_n_ascii(int howMany)
{
    int n = 33;
    if (howMany >= 94)
    {
        return 0;
    }
    else 
    {
        while (n <= howMany-33)
        {
            print_char(n);
            n +=1;
        }
    }
}