#include <stdint.h>
#include <limits.h>
#include "libft.h"

int	overflow(int64_t n)
{
	if (n > INT_MAX || n < INT_MIN)
		return (1);
	return (0);
}

int		main(void)
{

	if (overflow(-2147483649))
		ft_putendl_fd("deu merda", 1);
	else
		ft_putendl_fd("deu boum", 1);
	return (0);
}