#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include "../libft/libft.h"
# include <math.h>
# include <time.h>
# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct      s_elem
{
    int              value;
    int              index;
    bool             status;
    struct s_elem    *previous;
    struct s_elem    *next;
}                   t_elem;

typedef struct      s_stack
{
    t_elem          *head;
    size_t          size;
    size_t          pairs;
    t_elem          *markup;
    char            stack_index;
}                   t_stack;

t_stack         *init_stack(void);
void            parse(t_stack *stack, int argc, char **argv);
int             is_all_digit(char **av);
int             isDublicate(char **av);
int             isdub(char **av, char *c, int i);
int             IsInteger(char **argv);
void            ManageIndexes(char **argv, int argc, t_stack *stack, t_elem *head);
int             errorManagement(char **argv);
void	        isOrdered(t_stack *stack);
void	        error();
void	        ft_putstr(char *str);
int             ft_atoi_2(char **str);
void            startSorting(t_stack *stack_a, t_stack *stack_b);
void            rr(t_stack  *a, t_stack *b);
void            rotate(t_stack *stack, bool id);
void            reverse_rotate(t_stack *stack, bool id);
void            swap(t_stack *stack, bool id);
#endif