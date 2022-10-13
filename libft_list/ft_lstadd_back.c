#include "libft.h"

//lst boş ise direkt ilk elemani new atanir
//ptr nin en sonuna dek gider ptr next null olduğunda 
//new parametresi en sona atanir ve new in nexti null yapılır


void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *ptr;

	if(*lst == NULL)
		lst->next = new;
	else
	{
		ptr = *lst;
		while(ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
	}
}
