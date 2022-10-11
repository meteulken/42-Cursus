
#include "libft.h"
//Girilen değerin rakam olup olmadığını kontrol ediyor.

int	ft_isdigit(int str)
{
	if (str >= '0' && str <= '9')
		return (1);
	return (0);
}
