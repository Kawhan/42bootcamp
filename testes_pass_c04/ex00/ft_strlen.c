int	ft_strlen(char *str)
{
	int	cont;
	int	c;

	cont = 0;
	c = 0;
	while (str[c] != '\0')
	{
		c++;
		cont++;
	}
	return (cont);
}
