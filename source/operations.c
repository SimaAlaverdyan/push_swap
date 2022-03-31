#include "../include/push_swap.h"

void    swap(t_stack *stack, bool id)
{
    int  cur;

    if (stack->size >= 2)
    {
        cur = stack->head->value;
        stack->head->value = stack->head->next->value;
        stack->head->next->value = cur;
    }
    if (id)
    {
        if (stack->stack_index == 'a')
            ft_putstr("sa\n");
        else
            ft_putstr("sb\n");
    }
}

void    rotate(t_stack *stack, bool id)
{
    t_elem  *cur;
    int     i;

    if (stack->size >= 2)
    {
        cur = stack->head;
        i = 0;
        while (i < (int)stack->size - 1)
        {
            stack->head = stack->head->previous;
            i++;
        }
        stack->head->previous = cur;
    }
    if (id)
    {
        if (stack->stack_index == 'a')
            ft_putstr("ra\n");
        else
            ft_putstr("rb\n");
    }
}

void    rr(t_stack  *a, t_stack *b)
{
    rotate(a, false);
    rotate(b, false);
    ft_putstr("rr\n");
}

void    reverse_rotate(t_stack *stack, bool id)
{
    t_elem  *cur;
    int     i;

    if (stack->size >= 2)
    {
        cur = stack->head;
        i = 0;
        while (i < (int)stack->size - 1)
        {
            stack->head = stack->head->next;
            i++;
        }
        stack->head->next = cur;
    }
    if (id)
    {
        if (stack->stack_index == 'a')
            ft_putstr("rra\n");
        else
            ft_putstr("rrb\n");
    }
}