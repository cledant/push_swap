#include "push_swap.h"

void	ft_stack_rev_rotate_both(t_stack *a, t_stack *b)
{
	ft_stack_rev_rotate(a);
	ft_stack_rev_rotate(b);
}
