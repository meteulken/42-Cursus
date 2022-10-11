
#include "libft.h"
//Girilen dizideki harfleri büyültür.

int	ft_toupper(int a)
{
	if (a >= 'a' && a <= 'z')
		a -= 32;
	return (a);
}
