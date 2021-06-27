#include <stdint.h>
#include <limits.h>
#include "libft.h"
#include <stdio.h>

void	printste(t_list *lst)
{
	ft_putendl_fd(lst->content, 1);
	lst = lst->next;
	if (lst != NULL)
		ft_putendl_fd(lst->content, 1);
}

void	randomlistshit(t_list **lst)
{
	size_t	i;
	t_list	*ptr;

	i = 5;
	*lst = ft_lstnew(ft_strdup("mega"));
	ptr = *lst;
	while (i--)
	{
		ptr->next = ft_lstnew("zord");
		ptr = ptr->next;
	}

}

int		main(void)
{
	t_list	*lst;
	t_list	*lista;

	lista = ft_lstnew(ft_strdup("peraira"));
	// lst = ft_lstnew("pera");
	randomlistshit(&lst);
	
	ft_lstadd_front(&lst, lista);
	ft_putnbr_fd(ft_lstsize(lst), 1);
	ft_putchar_fd('\n', 1);
	printste(lst);
	return (0);
}