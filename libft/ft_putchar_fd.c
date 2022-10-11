
#include "libft.h"
//Belirttiğimiz dosyanın içine belirlediğimiz değeri yazar.

void	ft_putchar_fd(char a, int fd)
{
	write(fd, &a, 1);
}
