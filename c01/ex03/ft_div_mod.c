void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	division;
	int	rest;

	if (b != 0)
	{
		division = a / b;
		rest = a % b;
		*div = division;
		*mod = rest;
	}
}
