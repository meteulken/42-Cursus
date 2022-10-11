
#include "libft.h"
//Str parametresi ile gösterilen karakter dizisinde c parametresi ile gösterilen değerin ilk geçtiği yeri arar ve bu bellek adresini gösteren bir işaretçi geri döndürür.
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
		s++;
	if (c == *s)
		return ((char *)s);
	return (0);
}
/*#include<stdio.h>
int main()
{
    char str[] = "www.mete.com";
    printf("%s\n",ft_strchr(str,'m'));
}*/