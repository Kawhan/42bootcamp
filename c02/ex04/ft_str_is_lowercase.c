int	ft_str_is_lowercase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < 'a') || (str[cont] > 'z'))
			return (0);
		cont++;
	}
	return (1);
}
