
#include "libft.h"
//Girilen diziyi ayraç olarak belirlediğimiz değer görene kadar okur ve ayraç görünce ayraç olarak belirlediğimiz değerden öncesini bir kelime olarak kabul eder. Sonrasında dizimiz bitene kadar kadar bu işlem devam eder. Devamında hafızada tutulan bu kelimeleri malloc fonksiyonuna gönderip malloc fonksiyonunda bu kelimelerin boyutu kadar yer açar. Sonrasında açtığı bu yere hafızasındaki kelimeleri har harf kopyalar ve ekrana yazdırır.

static int	wordcounter(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			return (i);
		while (*s != c && *s)
			s++;
		i++;
	}
	return (i);
}

static int	charcounter(const char *s, char c)
{
	int	i;

	i = 0;
	while (*s && (*s != c))
	{
		i++;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**ret;
	int		retindex;

	if (!s)
		return (0);
	retindex = 0;
	ret = malloc(sizeof(char *) * wordcounter(s, c) + 1);
	if (!ret)
		return (0);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s == '\0')
			break ;
		ret[retindex] = ft_substr(s, 0, charcounter(s, c));
		retindex++;
		s = s + charcounter(s, c);
	}
	ret[retindex] = NULL;
	return (ret);
}
