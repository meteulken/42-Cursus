#include "libft.h"

//lstnin tüm elemanlarına f fonksiyonu uygulanır
//uygulama sonucu olusan elemanlar ile yeni bir liste olusturulur
//gerekli durumlarda lst bittikten sonra veya f null döndürünce
//yeni olusturulan first değiskenin içerisi temizlenir
//ve del ile silinir

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *result;
	t_list *node;

	if(!lst || !f)
		return (NULL);
	result = 0;

	while(lst)
	{
		node = ft_lstnew(f(lst->content));
		if(!node)
		{
			ft_lstclear(&result, del);
			return (0);
		}
		ft_lstadd_back(&result, node);
		lst = lst->next;
	}
	return (result);
}
