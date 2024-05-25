int print_char(char);
int my_strlen(char* toRevert);

void my_print_revert(char* toRevert)
{
    int len = my_strlen(toRevert);
    while (len != -1)
    {
        print_char(toRevert[len]);
        len -= 1;
    }
}