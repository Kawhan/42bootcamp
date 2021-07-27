int	ft_str_is_printable(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < ' ') || (str[cont] > '~'))
			return (0);
		cont++;
	}
	return (1);
}
