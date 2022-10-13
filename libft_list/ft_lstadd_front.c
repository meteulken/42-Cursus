#include "libft.h"

//daha once olusturulan struct dizimiz (t_list) ve eklenecek olan
//lst ve new atanır
//new elemani lst icerisine atanır
//lst nin asıl değeri new olur boylece new lst nin onune eklenmis olur

void ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
