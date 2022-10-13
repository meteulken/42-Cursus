#include "libft.h"

//lstnin nexti boş olana dek, devam eder
//sonunda index return eder(lst uzunluğu)

int ft_lstsize(t_list *lst)
{
	int index;

	index = 0;
	if(lst == NULL)
		return (NULL);
	while(lst->next != NULL)
	{
		lst = lst->next;
		index++;
	}
	return (index);
}
