void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	c;
	int	l;

	if (x <= 0 || y <= 0)
		return ;
	l = 1;
	while (l <= y)
	{
		c = 1;
		while (c <= x)
		{
			if ((c == 1 && l == 1) || (c == x && l == y && c != 1 && l != 1))
				ft_putchar('A');
			else if ((l == 1 && c == x) || (c == 1 && l == y))
				ft_putchar('C');
			else if (c == 1 || c == x || l == 1 || l == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		l++;
		ft_putchar('\n');
	}
}
