#include "../include/push_swap.h"

void	isOrdered(t_stack *stack)
{
	bool	ordered;
	int		i;
	t_elem *cur;
	t_elem *next;

	cur = stack->head;
	next = cur->next;
			
	ordered = true;
	i = 0;
	while (i < (int)stack->size - 1)
	{
		if (cur->value >= next->value)
		{
			ordered = false;
		}
		cur = cur->next;
		next = next->next;
		i++;
	}
	if (ordered)
		exit(0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	error()
{
	ft_putstr("Error\n");
	exit(0);
}