/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:43:03 by mulken            #+#    #+#             */
/*   Updated: 2022/10/11 20:47:05 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Kullanılan fonksiyonun ramde açtığı yeri sıfırlar.

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
/*#include<stdio.h>
int	main(void)
{
	char	str[] = "mete\n";
	printf("%s\n",str);
	ft_bzero(str, 3);
	printf("%s",str);
}*/
