
#include "libft.h"
//Dizimizdeki harfleri belirlediğimiz yere kadar belirlediğimiz değer ile değiştirir. 

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*#include<stdio.h>
int	main(void)
{
	char	str[] = "mete";
	ft_memset(str, 'a', 2);
	printf("%s\n",str);
}*/