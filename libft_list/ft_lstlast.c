#include "libft.h"

//lst nin son değerini döndürür

t_list *ft_lstlat(tlist *lst)
{
	t_list *ptr;

	ptr = lst;
	if(!ptr)
		return(NULL);
	while(ptr->next)
		ptr = ptr->next;
	return (ptr);
}
