int print_char(char);

void my_print_ascii(void)
{
    int ascii = 33;
    while (ascii <=126)
    {
        print_char(ascii);
        ascii += 1;
    }
    
}