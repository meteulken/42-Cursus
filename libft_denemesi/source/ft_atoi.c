int 	ft_atoi(const char *str)
{
	long long int number;
	int	neg;

	number = 0;
	neg = 1;

	while((str[i] => 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if(str[i] == '+')
		i++;
	if(str[i] == '-')
		neg *= -1;

	while(str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + (str[i] - 48) * neg;
		i++;
		if(number > 2147483647)
			return (-1);
		if(number < -2147483648)
			return (0);
	}
	return (number);
}
