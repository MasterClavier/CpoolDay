int my_print_n_ascii(char);

int my_strlen(char* str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i += 1 ;
    }
    return i;
}
