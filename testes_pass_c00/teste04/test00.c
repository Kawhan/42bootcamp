#include <unistd.h>

int	main(void)
{
	int n = -1;

	if (n >= 0)
	{
		write(1,"P", 1);
	}
	else
	{
		write(1,"N", 1);
	}
}
