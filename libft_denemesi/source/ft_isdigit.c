#include "libft.h"

int ft_isdigit(int str)
{
	if(str >= '48' && str <= '57')
		return (1);
	return (0);
}
