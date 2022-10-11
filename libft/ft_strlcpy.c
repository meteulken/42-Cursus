
#include "libft.h"
//Kaynak dizimizi belirlediğimiz uzunluk kadar hedef dizine yapıştırır.

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*#include<stdio.h>
int main()
{
	char str1[] = "mete";
	char str2[] = "test";
	printf("%zu\n",ft_strlcpy(str1,str2,5));
	return (0);
}*/