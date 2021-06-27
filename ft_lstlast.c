#include "libft.h"

t_list	*ft_lastlist(t_list *lst)
{
	while (lst->next)
		lst = lst->next;
	return (lst);
}