char	*ft_strupcase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] >= 'a') && (str[cont] <= 'z'))
			str[cont] -= 'a' - 'A';
		cont++;
	}
	return (str);
}
