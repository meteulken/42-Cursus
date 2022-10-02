#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*target;
	size_t	len;

	len = ft_strlen(s);
	target = malloc((len + 1) * sizeof(char));
	if (!target)
		return (NULL);
	len = 0;
	while (s[len])
	{
		target[len] = s[len];
		len++;
	}
	target[len] = '\0';
	return (target);
}