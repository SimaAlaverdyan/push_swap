#include "../include/push_swap.h"

// void sa(t_stack *stack)
// {
//     int swap = stack->array[0];
//     stack->array[0] = stack->array[1];
//     stack->array[1] = swap;
// }

// void ra(t_stack *stack, int ac, int first)
// {
//     for (int i = 0; i < ac - 2; i++)
//         stack->array[i] = stack->array[i + 1];
//     stack->array[ac - 2] = first;
// }

// void rra(t_stack *stack, int ac, int last)
// {
//    for(int i = 0; i < 1; i++){    
//         int j;    
//         //Stores the last element of the array     
//         for(j = ac - 1; j > 0; j--){    
//             //Shift element of array by one    
//             stack->array[j] = stack->array[j-1];    
//         }    
//         //Last element of array will be added to the start of array.    
//         stack->array[0] = last;    
//     }    
// }
// int     *sortArray(int size, int *array)
// {
//     int i;
//     int j;
//     int temp;

//     for (i = 0; i < (size - 1); ++i)
//     {
//         for (j = 0; j < size - 1 - i; ++j)
//         {
//             if (array[j] > array[j+1])
//             {
//                 temp = array[j + 1];
//                 array[j + 1] = array[j];
//                 array[j] = temp;
//             }
//         }
//     }
//     return array;
// }

//check and add to stack b if the previous index is greater than current index

// void    checkAndAddToB(t_stack *stackA, t_elem *head, t_stack *stackB)
// {
//     t_elem *current_node = head;

//    	size_t i = 0;
//     while (i < stack->size) {
//         if()
//         {            
//         }
//         current_node->index = sortedIndexes[i];
//         current_node = current_node->next;
//         i++;
//     }
// }

void    swap(t_stack *stack, bool id)
{
    t_elem  *cur;

    if (stack->size >= 2)
    {
        cur = stack->head;
        stack->head = stack->head->next;
        stack->head->next = cur;
            printf("%d\n", stack->head->value);
            printf("%d\n", stack->head->next->value);
            printf("%d\n", stack->head->next->value);
            printf("%d\n", stack->head->previous->value);
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
            // printf("%d\n", stack->head->value);
        }
        stack->head->previous = cur;
        // printf("%d\n", stack->head->next->value);
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
            // printf("%d\n", stack->head->value);
        }
        stack->head->next = cur;
        // printf("%d\n", stack->head->next->value);
    }
    if (id)
    {
        if (stack->stack_index == 'a')
            ft_putstr("rra\n");
        else
            ft_putstr("rrb\n");
    }
}