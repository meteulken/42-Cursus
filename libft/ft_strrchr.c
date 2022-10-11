
#include "libft.h"
//Belirlediğimiz dizinin içinde belirlediğimiz karakteri arayıp bulduktan sonra geri kalanını yazdıracaktık lakin bunun kolay versiyonu olarak belirlediğimiz harfi belirlediğimiz dizinin sonundan başlayarak aradık. İlk karşılaştığı değerden sonrasını ekrana yazdırdık.

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	while (len >= 0 && s[len] != (char)c)
		len--;
	if (s[len] == (char)c)
		return ((char *)&s[len]);
	return (NULL);
}
/*#include<stdio.h>
int main()
{
    char str1[]="metextest";
    printf("%s\n",ft_strrchr(str1,'x'));
}*/