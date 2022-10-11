
#include "libft.h"

//Girilen değerin harf veya rakam mı olduğunu kontrol ediyor.

int	ft_isalnum(int str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')
		|| (str >= '0' && str <= '9'))
		return (1);
	return (0);
}
