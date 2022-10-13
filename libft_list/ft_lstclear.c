#include "libft.h"

//verilen lst struct listesi gezilir gecici olarak ptr degiskeninde lst yi tutar// tüm değerler sonra silinir.

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *ptr;
	t_list *t;

	ptr = *lst;

	while(ptr)
	{
		(*del)(ptr->content);
		t = ptr->next;
		free(ptr);
		ptr = t;
	}
	*lst = NULL;
}
