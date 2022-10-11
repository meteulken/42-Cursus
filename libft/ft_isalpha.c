
#include "libft.h"
//Girilen değerin harf olup olmadığını kontrol ediyor.

int	ft_isalpha(int str)
{
	if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))
		return (1);
	return (0);
}
