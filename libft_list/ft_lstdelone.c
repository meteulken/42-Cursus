#include "libft.h"

//bir struch verilir eğer boşsa return edilir
//eğer boş değilse verilen del fonksiyonuna lst'in contenti verilir
//silinir, en son olarak free ile lst bellekten silinir

void ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if(!lst)
		return ;
	del(lst->content);
	free(lst);
}
