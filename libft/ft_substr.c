
#include "libft.h"
//Dizimizin içinde belirlediğimiz başlangıç noktasından itibaren belirlediğimiz değer sayısı kadar alıp dizi haline getirir ve bu diziyi ekrana yazar.

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	new_str = (char *)malloc(len + 1);
	if (!s || !new_str)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}
/*#include<stdio.h>
int main()
{
    char str1[] = "metedenemetest";
    printf("%s\n",ft_substr(str1,2,5));//Belirtilen index aralığını yazdırır.
	//0 burda bufferımız.Sınırlayıcımız.
}*/