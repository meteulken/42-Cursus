/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mulken <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:25:25 by mulken            #+#    #+#             */
/*   Updated: 2022/10/13 22:11:25 by mulken           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Belirttiğimiz dosyanın içine belirlediğimiz değeri yazar.

void	ft_putchar_fd(char a, int fd)
{
	write(fd, &a, 1);
}
/*
int main()
{
	int i = open("test.txt",1);
	printf("%d",i);
	ft_putchar_fd('a',i);
	int c = open("test2.txt",1);
	printf("%d",c);
}*/
