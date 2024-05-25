int print_char(char);
int my_strlen(char* torevert);

void my_print_revert(char* torevert)
{
    int len = my_strlen(torevert);
    while (len != -1)
    {
        print_char(torevert[len]);
        len -= 1;
    }
}