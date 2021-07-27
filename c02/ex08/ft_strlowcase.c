char	*ft_strlowcase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] >= 'A') && (str[cont] <= 'Z'))
			str[cont] += 'a' - 'A';
		cont++;
	}
	return (str);
}
