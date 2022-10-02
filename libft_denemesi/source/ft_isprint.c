#include "libft.h"

int ft_isprint(int str)
{
	if(str >= '32' && str <= '127')
		return (1);
	return (0);
}
