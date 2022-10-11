
#include "libft.h"
//Memcmp fonksiyonundan farklı olarak belirlediğimiz yere kadar karşılaştırır ve bu karşılaştırmanın sonucu olarak girilen return değerlerini döndürür.

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (i < n && (str1[i] || str2[i]))
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}
/*#include<stdio.h>
int main()
{
	char str1[] = "mete";
	char str2[] = "meta";
	printf("%d\n",ft_strncmp(str1,str2,4));
	return (0);
}*/