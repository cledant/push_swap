#include "push_swap.h"

void	ft_stack_destroy(t_stack **stack)
{
	free((*stack)->array);
	free((*stack)->filled);
	free(*stack);
	stack = NULL;
}
