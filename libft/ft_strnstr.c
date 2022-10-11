
#include "libft.h"
//Girilen dizimizin içinde belirlediğimiz diziyi arar ve belirlediğimiz diziyi ve  sonrasını ekrana yazdırır.

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hayint;
	size_t	needint;

	hayint = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[hayint] != 0 && hayint < len)
	{
		needint = 0;
		while (haystack[hayint + needint] == needle[needint]
			&& needle[needint] != 0 && needint + hayint < len)
			needint++;
		if (!needle[needint])
			return ((char *)&haystack[hayint]);
		hayint++;
	}
	return (NULL);
}
/*#include<stdio.h>
int main()
{
    char str1[] = "mete test";
    char str2[] = "t";
    printf("%s\n",ft_strnstr(str1,str2,7));
}*/