int	ft_is_prime(int nb)
{
	int	num;
	int cont;

	num = 1;
	cont = 1;
	while (num < nb)
	{
		if (nb < 2)
		{
			return (0);
		}
		if (nb % num == 0)
		{
			cont++;
		}
		num++;
	}
	if (cont == 2)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
