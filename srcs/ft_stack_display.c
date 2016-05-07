#include "push_swap.h"

void	ft_stack_display(t_stack *stack)
{
	int	i;

	i = stack->size;
	while(i >= 0)
	{
		if(stack->filled[i] == 1)
		{
			if (i != 0)
			{
				ft_putnbr(stack->array[i]);
				ft_putstr(" ");
			}
			else
				ft_putnbrendl(stack->array[i]);
		}
		i--;
	}
}
