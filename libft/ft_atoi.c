#include "libft.h"

//Öncelikle boşluk varsa veya o anki değer ascii tablosunda 9 ile 13 arasında ise atlıyor. Eğer eksi görürse neg’e eksi bir atıyor. Eğer artı görürse atlıyor. Döngüde o anki değerin rakam olup olmadığını kontrol ediyor. Eğer rakamsa değeri ascii tablosunda yazılabilecek hale çeviriyor ve neg ile çarpıyor. Diğer koşullarda integerin minimum ve maksimum değerini kontrol ediyoruz. En son olarak ekrana değeri yazdırıyor.

int	ft_atoi(const char *str)
{
	long long int	number;
	int				neg;

	number = 0;
	neg = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		number = (number * 10) + (*str - '0') * neg;
		str++;
		if (number > 2147483647)
			return (-1);
		if (number < -2147483648)
			return (0);
	}
	return (number);
}
/*#include<stdio.h>
int main()
{
    char atoi [] ="    -465";
	printf("%d\n",ft_atoi(atoi));
    
}*/