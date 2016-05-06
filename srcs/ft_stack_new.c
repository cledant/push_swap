#include "push_swap.h"

t_stack		*ft_stack_new(int len)
{
	t_stack		*new;

	if ((new =  (t_stack *)malloc(sizeof(t_stack))) == NULL)
		return (NULL);
	if ((new->array = (int *)malloc(len * sizeof(int))) == NULL)
	{
		free(new);
		return (NULL);
	}
	if ((new->filled = (int *)malloc(len * sizeof(int))) == NULL)
	{
		free(new->array);
		free(new);
		return (NULL);
	}
	new->size = len;
	ft_bzero(new->array, sizeof(int) * len);
	ft_bzero(new->filled, sizeof(int) * len);
	return (new);
}
