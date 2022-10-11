
#include "libft.h"
//Girilen dizinin içinde belirlediğimiz yere kadar belirlediğimiz karakteri arar ve bulduğu değer dahil sonrasını döndürür.

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*p = "deneme";
	char	b = 'n';
	printf("%s\n", ft_memchr(p,b,6));
}*/
