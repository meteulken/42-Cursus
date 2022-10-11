
#include "libft.h"

//Bzero fonksiyonun yaptığı işlemi memoryde yapar.

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(size * count);
	if (!p)
		return (p);
	ft_bzero(p, (count * size));
	return (p);
}
