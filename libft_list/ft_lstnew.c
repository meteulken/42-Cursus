#include "libft.h"

//bu bir bağlı listedir
//fonksiyon cağrıldığında verilen content
//structimizin content bölümüne kaydedilir
//ilk oluşturduğunu içinde next değeri null dur
//ve oluşturulan yeni struct return edilir

t_list *ft_lstnew(void *content)
{
	t_list *new;

	new = malloc(sizeof(t_list));

	if(!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
