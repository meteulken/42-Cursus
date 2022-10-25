/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:56:27 by mulken            #+#    #+#             */
/*   Updated: 2022/10/14 11:45:11 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//daha once olusturulan struct dizimiz (t_list) ve eklenecek olan
//lst ve new atanır
//new elemani lst icerisine atanır
//lst nin asıl değeri new olur boylece new lst nin onune eklenmis olur

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
