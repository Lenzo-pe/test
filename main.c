#include <stdint.h>
#include <limits.h>
#include "libft.h"
#include <stdio.h>

int	overflow(int64_t n)
{
	if (n > INT_MAX || n < INT_MIN)
		return (1);
	return (0);
}

int		main(void)
{
	t_list	*lst;

	lst = ft_lstnew("pera");
	printf("%s", lst->content);
	return (0);
}