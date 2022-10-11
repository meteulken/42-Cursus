
#include "libft.h"
//Girilen değeri null olana kadar adım adım ekrana yazdırır ve satır atlar.

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		while (*s)
		{
			ft_putchar_fd(*s, fd);
			s++;
		}
		ft_putchar_fd('\n', fd);
	}
}
