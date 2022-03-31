#include "../include/push_swap.h"

void print(t_stack *stack)
{
    t_elem *current_node = stack->head;
   	size_t i = 0;
    while (i < stack->size)
    {
        printf("%d ", current_node->value);
        current_node = current_node->next;
        i++;
    }
}

int main(int argc, char **argv)
{
    t_stack     *stack_a;
    t_stack     *stack_b;
    int         error;

    if (argc == 1)
        exit(0);
    if((error = errorManagement(argv)) == 1)
        return 0;
    stack_a = init_stack();
    stack_b = init_stack();
    stack_a->stack_index = 'a';
    stack_b->stack_index = 'b';
    parse(stack_a, argc, argv);
    t_elem *head;
    
    head = stack_a->head;
    ManageIndexes(argv, argc, stack_a, head);
    // print(stack, head);
    //startSorting(stack_a, stack_b);
    // printf("%d\n", stack_a->head->value);
    // rotate(stack_a, true);
    // head = stack_a->head;
    // print(stack_a);
    // printf("\n");
    // reverse_rotate(stack_a, true);
    // print(stack_a);
    // printf("\n");
    //swap(stack_a, true);
    //print(stack_a);

    push_elem_to_end(stack_a, 15);
    print(stack_a);
    return (0);
}  