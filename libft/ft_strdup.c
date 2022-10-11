
#include "libft.h"
//Malloc fonksiyonu ile girilen dizinin boyutu kadar yer açıp açılan yere diziyi kopyalar.

char	*ft_strdup(const char *str)
{
	char	*ptr;
	size_t	index;

	ptr = (char *)malloc(sizeof(*str) * (ft_strlen(str) + 1));
	if (!ptr)
		return (NULL);
	index = 0;
	while (str[index])
	{
		ptr[index] = str[index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
/*#include <stdio.h>
int	main(void)
{
	char str[] = "mete";
    printf("%s\n",ft_strdup(str));
    return (0);
}*/