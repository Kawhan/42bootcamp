void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	rest;

	if (*b != 0)
	{
		division = *a / *b;
		rest = *a % *b;
		*a = division;
		*b = rest;
	}
}
