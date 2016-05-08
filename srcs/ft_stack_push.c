#include "push_swap.h"

void	ft_stack_push(t_stack *dst, t_stack *src)
{
	if(src->in == 0 || dst->size == dst->in)
		return ;
	dst->array[dst->in] = src->array[src->in - 1];
	dst->filled[dst->in] = 1;
	src->array[src->in - 1] = 0;
	src->filled[src->in - 1] = 0;
	src->in -= 1;
	dst->in += 1;
}
