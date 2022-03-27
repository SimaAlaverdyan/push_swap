#include "../include/push_swap.h"


//sortes the array of nubers and returns the array
int     *sortArray(int size, int *array)
{
    int i;
    int j;
    int temp;

    for (i = 0; i < (size - 1); ++i)
    {
        for (j = 0; j < size - 1 - i; ++j)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }
    return array;
}

void    addSortedIndexesList(t_stack *stack, t_elem *head, int *sortedIndexes)
{
    t_elem *current_node;
   	size_t i;
       
    i = 0;
    current_node = head;
    while (i < stack->size) 
    {    
        current_node->index = sortedIndexes[i];
        current_node = current_node->next;
        i++;
    }
}

//returns sorted indexes for adding to the object of stack
int     *returnSortedIndexes(int *unsortedArray, int *sortedArray, int size)
{
    int i;
    int j;
    int *sortedIndexes;

    sortedIndexes = (int*) malloc(sizeof(int) * (size - 1));

    for(i = 0; i < size; i++)
        for(j = 0; j < size; j++)
            if(unsortedArray[i] == sortedArray[j])
                sortedIndexes[i] = j;
    return sortedIndexes;

    // free(sortedIndexes);
}

void    ManageIndexes(char **argv, int argc, t_stack *stack, t_elem *head)
{  
    int i;
    int j;
    int unsortedArray[argc - 1];
    int unsortedArray2[argc - 1];
    int *sortedIndexes;
    int *sortedArray;


    sortedArray = (int*) malloc(sizeof(int) * (argc - 1));
    sortedIndexes = (int*) malloc(sizeof(int) * (argc - 1));
    j = 0;
    
    for(i = 1; i < argc; i++)
    {
        unsortedArray[j] =  ft_atoi(argv[i]);
        unsortedArray2[j] = ft_atoi(argv[i]);
        j++;
    }

    sortedArray = sortArray(argc - 1, unsortedArray);
    sortedIndexes = returnSortedIndexes(unsortedArray2, sortedArray, argc - 1);

    addSortedIndexesList(stack, head, sortedIndexes);
 
    // free(sortArray);
    // free(sortedIndexes);
}
