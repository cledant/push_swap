#include "push_swap.h"

static inline void	ft_rotate_1(t_stack *stack, int (*tmp)[4], int i)
{
	(*tmp)[2] = stack->array[i];
	(*tmp)[3] = stack->filled[i];
	stack->array[i] = (*tmp)[0];
	stack->filled[i] = (*tmp)[1];
	(*tmp)[0] = (*tmp)[2];
	(*tmp)[1] = (*tmp)[3];
}


static inline void	ft_rotate_2(t_stack *stack, int (*tmp)[4], int i)
{
	(*tmp)[2] = stack->array[i];
	(*tmp)[3] = stack->filled[i];
	stack->array[i] = (*tmp)[0];
	stack->filled[i] = (*tmp)[1];
	stack->array[0] = (*tmp)[2];
	stack->filled[0] = (*tmp)[3];
}

void			ft_stack_rotate(t_stack *stack)
{
	int	i;
	int	tmp[4];

	ft_bzero(tmp, sizeof(int) * 4);
	if (stack->in == 0 || stack->in == 1)
		return ;
	i = 1;
	tmp[0] = stack->array[0];
	tmp[1] = stack->filled[0];
	while (i < stack->in)
	{
		if (i != stack->in - 1)
			ft_rotate_1(stack, &tmp, i);
		else
			ft_rotate_2(stack, &tmp, i);
		i++;
	}
}
