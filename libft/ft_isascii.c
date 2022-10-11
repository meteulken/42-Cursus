
#include "libft.h"
//Girilen değerin ascii tablosunda olup olmadığını kontrol eder.

int	ft_isascii(int str)
{
	if (str >= 0 && str <= 127)
		return (1);
	return (0);
}
