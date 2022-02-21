#include "../include/push_swap.h"

int main(int argc, char **argv)
{
    // t_stack     *a;
    // // t_stack     *b;

    // a = (t_stack *)malloc(sizeof(t_stack));
    // a->head = malloc(sizeof(t_elem));
    // for (int i = 1; i < argc; i++)
    // {
    //     a->head->value = *argv[i];
    //     a->head->index = 0;
    //     a->head->status = false;
    // }
    // for (int i = 1; i < argc; i++)
    // {
    //     printf("%c\n %d\n %d\n", a->head->value, a->start->index, a->start->status);
    // }
    
    t_stack     *stack;
    
    stack = init_stack();
    parse(stack, argc, argv);

    // for (size_t i = 0; i < stack->size; i++)
    // {
    //     printf("%zu\n", stack->size);
    //     printf("%d\n", stack->head->value);
    // }
    

    return (0);
}