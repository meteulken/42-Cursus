#include "libft.h"

int ft_isalnum(int str)
{
	if((str > 'a' && str 'z') || (str >= 'A' && str <= 'Z')
		|| (str >= '0' && str <= '9'))
		return (1);
	return(0);
}
