
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
	ft_putstr(str);
	ft_bzero(str, 3);
	ft_putstr(str);
}*/