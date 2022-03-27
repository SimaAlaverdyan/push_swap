#include "../include/push_swap.h"

void    markup(t_stack *a, t_stack *b)
{
    statusCheck(a);
    moveToB(a, b);
    moveToA(a, b);
    sortStackA(a);
}

void    threeMarkup(t_stack *a)
{
    t_elem     *first;
    t_elem     *second;
    t_elem     *third;

    first = a->head;
    second = first->next;
    third = second->next;

    if (first->value > second->value && second->value > third->value)
    {
        rotate(a, true);
        swap(a, true);
    }
    else if (first->value < third->value && third->value < second->value)
    {
        swap(a, true);
        rotate(a, true);
    }
    else if (second->value < first->value && first->value < third->value)
		swap(a, true);
	else if (second->value < third->value && third->value < first->value)
		rotate(a, true);
	else
		rotate(a, true);
}

void    startSorting(t_stack *stack_a, t_stack *stack_b)
{
    if (stack_a->size == 2)
    {
        swap(stack_a, true);
        return ;
    }
    else if (stack_a->size == 3)
    {
        threeMarkup(stack_a);
        return ;
    }
    else
        markup(stack_a, stack_b);
}