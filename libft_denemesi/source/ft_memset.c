#include "libft.h"

void	*ft_memset(void *dest, int data, size_t n)
{
	size_t i;

	i=0;
	while(i < n)
		*((char *)((dest + i)) = data;

	return (dest);
}
