
#include "libft.h"
//Girilen değerin yazdırılabilir olup olmadığını kontrol eder.

int	ft_isprint(int str)
{
	if (str >= 32 && str < 127)
		return (1);
	return (0);
}
