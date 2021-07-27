#include <unistd.h>

int	main(void)
{
	int		first;
	int		second;
	char	left[2];
	char	right[2];

	first = 00;
	second = first + 1;
	while (first <= 98)
	{
		while (second <= 99)
		{	
			right[0] = ((first / 10) % 10) + '0';
			right[1] = (first % 10) + '0';
			left[0] = ((second / 10) % 10) + '0';
			left[1] = (second % 10) + '0';
			write(1, right, 2);
			write(1, " ", 1);
			write(1, left, 2);
			if (first != 98)
				write(1, ", ", 2);
			second++;
		}
		first++;
		second = first + 1;
	}
	return (0);
}
