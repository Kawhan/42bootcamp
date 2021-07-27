#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		write(1, &str[cont], 1);
		cont++;
	}
}
