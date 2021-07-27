#include <unistd.h>

int	main(void)
{
	char	c;
	c = 'a';
	write(1, &c, 1);
}
