#include "../include/push_swap.h"

int     errorManagement(char **argv)
{
    // if(is_all_digit(argv) == 0)
    //     error();
    if(isDublicate(argv) == 0)
        error();
    else if(!IsInteger(argv))
        error();
    return (0);
}