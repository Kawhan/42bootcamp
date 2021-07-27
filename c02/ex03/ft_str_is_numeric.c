int	ft_str_is_numeric(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < '0') || (str[cont] > '9'))
			return (0);
		cont++;
	}
	return (1);
}
