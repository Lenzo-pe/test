#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;

	if (!lst)
		return (NULL);
	ptr = ft_lstnew(f(lst->content));
	if (!ptr)
	{
		ft_lstclear(&ptr, del);
		return (NULL);
	}
	ptr->next = ft_lstmap(ptr->next, f, del);
	return (ptr);
}
