
#include "libft.h"
//Belirleyeceğimiz iki diziyi sırayla malloca atıp ard arda yazar.

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	alan;

	if (!s1 || !s2)
		return (NULL);
	alan = (ft_strlen(s1) + ft_strlen(s2));
	str = malloc(sizeof(char) * alan + 1);
	i = -1;
	j = 0;
	if (!str)
		return (NULL);
	while (s1[++i])
		str[i] = s1[i];
	while (s2[j])
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*#include<stdio.h>
int main()
{
    char str1[] = "mete";
    char str2[] = " x";   
    printf("%s\n",ft_strjoin(str1,str2));
    return (0);
}*/