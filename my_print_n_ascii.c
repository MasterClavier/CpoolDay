#include "stdio.h"

int print_char(char);

void my_print_n_ascii(int howMany)
{
    int n = 32;
    if (howMany >= 94)
    {
        return;
    }
    else 
    {
        while (n <= howMany+32)
        {
            print_char(n);
            n +=1;
        }
    }
}