#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "../libft/libft.h"
#include <math.h>
#include <time.h>

typedef struct      s_elem
{
    int              value;
    int              index;
    bool             status;
    struct s_elem    *previous;
    struct s_elem    *next;
}                   t_elem;

typedef struct  s_stack
{
    t_elem       *head;
    size_t       size;
    size_t       pairs;
    t_elem       *markup;
}               t_stack;

t_stack         *init_stack(void);
void            parse(t_stack *stack, int argc, char **argv);


#endif