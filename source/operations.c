// #include "../include/push_swap.h"

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