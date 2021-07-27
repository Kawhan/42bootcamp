#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont])
	{
		ft_putchar(str[cont]);
		cont++;
	}
}
