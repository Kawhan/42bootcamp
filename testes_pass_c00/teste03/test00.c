#include <unistd.h>

int	main(void)
{
	char		c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
}
