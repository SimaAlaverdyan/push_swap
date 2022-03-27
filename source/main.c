#include "../include/push_swap.h"

void print(t_stack *stack, t_elem *head)
{
    t_elem *current_node = head;
   	size_t i = 0;
    while (i < stack->size) {
        printf("%d[%d] ", current_node->value, current_node->index);
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
    {
        printf("main exit\n");
        return 0;
    }
    stack_a = init_stack();
    stack_b = init_stack();
    stack_a->stack_index = 'a';
    stack_b->stack_index = 'b';
    parse(stack_a, argc, argv);
    t_elem *head = stack_a->head;
    ManageIndexes(argv, argc, stack_a, head);
    // print(stack, head);
    startSorting(stack_a, stack_b);

    return (0);
}