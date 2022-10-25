/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:25:07 by mulken            #+#    #+#             */
/*   Updated: 2022/10/11 22:38:20 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*Dizimizdeki harfleri belirlediğimiz yere kadar belirlediğimiz
 * değer ile değiştirir. 
*/
void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*#include<stdio.h>
int	main(void)
{
	char	str[] = "mete";
	ft_memset(str, 'a', 2);
	printf("%s\n",str);
}*/
