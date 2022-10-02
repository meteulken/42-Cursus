#include "libft.h"
void	*ft_memchr(const void *str, int c, size_t n)
{
	char	*string;
	size_t	index;

	index = 0;
	string = (char *)str;
	while (index < n)
	{
		if ((unsigned char)string[index] == (unsigned char)c)
			return ((void *)&string[index]);
		index++;
	}
	return (0);
}