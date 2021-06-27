#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptr;

	ptr = lst;
	while (lst->next)
		lst = lst->next;
	return (lst);
}
