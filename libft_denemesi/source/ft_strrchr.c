#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	index;

	index = ft_strlen(str);
	if (c == 0)
		return ((char *)&str[index]);
	while (index >= 0)
	{
		if (str[index] == c)
			return ((char *)&str[index]);
		index--;
	}
	return (0);
}