/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:25:01 by mulken            #+#    #+#             */
/*   Updated: 2022/10/11 22:40:50 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*Memcpyden farklı olarak kopyalanacak dizimizin belirlediğimiz yerinden 
* başlayarak kopyalar. Bu şekilde örtüşmeleri engeller.
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*src2;
	size_t	i;

	i = 0;
	dest = (char *)dst;
	src2 = (char *)src;
	if (dst == NULL && src2 == NULL)
		return (NULL);
	if (src2 < dest)
		while (++i <= len)
			dest[len - i] = src2[len - i];
	else
		return (ft_memcpy(dest, src, len));
	return (dst);
}
/*#include<stdio.h>
int	main(void)
{
	char	*str1 = malloc(sizeof(char) * 5);
	char	*str2 = malloc(sizeof(char) * 5);
	char	*src = "mete";
    ft_memmove(str2 ,src , 3);
    printf("%s\n",str1);
}*/
