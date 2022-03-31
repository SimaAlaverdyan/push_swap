#include "../include/push_swap.h"

void    push_elem_to_end(t_stack *stack, int new_data)
{
    t_elem      *new;
    t_elem      *previous = stack->head->previous;

    if (!(new = (t_elem *)malloc(sizeof(t_elem))))
        error();

    new->index = -1;
    new->status = false;
    new->value = new_data;
    new->next = previous->next;
    previous->next = new;
    new->previous = previous;
    stack->size++;

    // current_node->previous->next = new;
    // current_node->previous->next = new;

    // new->previous = current_node->previous;
    // new->next = current_node;
    // print(stack);
    //printf("%d\n",previous->value);
}