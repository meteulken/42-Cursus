#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*#include <stdio.h>
void	funct(unsigned int a, char *b)
{
	*b = *b+a;
}
int main()
{
	char dizi[] = "aaaaaaaaaaaaaaaa";
	ft_striteri(dizi, funct);
	printf("%s",dizi);
}*/