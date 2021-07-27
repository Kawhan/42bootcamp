int	ft_str_is_uppercase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < 'A') || (str[cont] > 'Z'))
			return (0);
		cont++;
	}
	return (1);
}
