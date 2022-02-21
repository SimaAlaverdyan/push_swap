#include "../include/push_swap.h"

t_stack         *init_stack(void)
{
	t_stack *stack;

	if (!(stack = (t_stack *)malloc(sizeof(t_stack))))
		// terminate(ERR_MEMALLOC);
        printf("%s\n", "error");
	stack->head = NULL;
	stack->size = 0;
	stack->pairs = 0;
	stack->markup = NULL;
	return (stack);
}

void        add_to_stack(t_stack *stack, t_elem *elem)
{
    t_elem      *last_elem;

    if (stack && elem)
    {
        if (!stack->head)
        {
            stack->head = elem;
            stack->head->previous = stack->head;
            stack->head->next = stack->head;
        }
        else
        {
            last_elem = stack->head->previous;
            elem->previous = last_elem;
            last_elem->next = elem;
            elem->next = stack->head;
            stack->head->previous = elem;
        }
        stack->size++;
    }
}

t_elem      *create_elem(int    value)
{
    t_elem      *new;

    if (!(new = (t_elem *)malloc(sizeof(t_elem))))
        printf("%s\n", "error");
    new->value = value;
    new->index = -1;
    new->status = false;
    new->previous = NULL;
    new->next = NULL;

    return (new);
}

void    parse(t_stack *stack, int argc, char **argv)
{
    int     i;

    i = 1;
    while (i < argc)
    {
        // if (!ft_isint(argv[i], false))                 //NEED TO ADD HERE CHECKER
        //     printf("%s\n", "error");
        add_to_stack(stack, create_elem(ft_atoi(argv[i])));
        i++;
    }
    
}