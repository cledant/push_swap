#include "push_swap.h"

void	ft_stack_swap(t_stack *stack)
{
	int	tmp;

	if (stack->in == 0 || stack->in == 1)
		return ;
	tmp = stack->array[stack->in - 1];
	stack->array[stack->in - 1] = stack->array[stack->in - 2];
	stack->array[stack->in - 2] = tmp;
}
