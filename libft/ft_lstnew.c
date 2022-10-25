/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:57:19 by mulken            #+#    #+#             */
/*   Updated: 2022/10/13 22:07:25 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//bu bir bağlı listedir
//fonksiyon cağrıldığında verilen content
//structimizin content bölümüne kaydedilir
//ilk oluşturduğunu içinde next değeri null dur
//ve oluşturulan yeni struct return edilir

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
