#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char			*dest;
	unsigned int	n;

	n = 0;
	while (src[n] != '\0')
		n++;
	dest = malloc(n + 1);
	if (dest != NULL)
	{
		dest[n] = '\0';
		while (n--)
			dest[n] = src[n];
	}
	return (dest);
}
