
#include "libft.h"
//Girilen dizinin uzunluğunu ekrana yazdırır.

size_t	ft_strlen(const char *c)
{
	int	index;

	index = 0;
	while (c[index])
		index++;
	return (index);
}
