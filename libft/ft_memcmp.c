/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:24:44 by mulken            #+#    #+#             */
/*   Updated: 2022/10/11 22:37:28 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*S1 ve S2 dizilerini birbiri arasında belirledimiz yere kadar kontrol edip ilk 
 * farklılık gördüğü değerleri ascii tablosunda birbirinden çıkarıp ekrana yazar.
 * Strchr fonksiyonundan farklı olarak bu fonksiyon bu işlemi memoryde yapar.
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*#include<stdio.h>
int main()
{
    char str1[] = "mete";
    char str2[] = "meta";
    printf("%d\n",ft_memcmp(str1,str2,4));
}*/
