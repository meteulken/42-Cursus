/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:24:17 by mulken            #+#    #+#             */
/*   Updated: 2022/10/11 22:24:19 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Girilen değerin yazdırılabilir olup olmadığını kontrol eder.

int	ft_isprint(int str)
{
	if (str >= 32 && str < 127)
		return (1);
	return (0);
}
