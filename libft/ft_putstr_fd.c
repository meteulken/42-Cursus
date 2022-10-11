
#include "libft.h"
//Girilen dizinin uzunluğunu kontrol edip dosyanın içine yazdırır.

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
